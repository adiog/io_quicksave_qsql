// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.

#include <antlr4-runtime.h>
#include <folly/Format.h>
#include <qsql/qsqlVisitor.h>

#include "supersonic/supersonic.h"


using SQL =
    std::pair<std::string, std::unordered_map<std::string, std::string>>;
using CTX = antlr4::ParserRuleContext;

struct AstNode
{
    virtual ~AstNode() = default;
    virtual SQL buildQuery() = 0;
    virtual const supersonic::Expression *buildExpression() = 0;
};

using AstNodePtr = antlrcpp::Any;  // std::unique_ptr<AstNode>;

#define GETSQL(node) node.as<std::shared_ptr<AstNode>>()->buildQuery()
#define GETEXPRESSION(node) \
    node.as<std::shared_ptr<AstNode>>()->buildExpression()
#define FORMAT(...) (folly::format(__VA_ARGS__).str())
std::string get_hash(std::string str)
{
    return str;
}

struct NullaryAstNode : public AstNode
{
    NullaryAstNode(CTX *ctx)
            : ctx(*ctx)
    {
    }

    CTX &ctx;
};

struct UnaryAstNode : public AstNode
{
    UnaryAstNode(AstNodePtr astNode)
            : astNode(std::move(astNode))
    {
    }

    AstNodePtr astNode;
};

struct BinaryAstNode : public AstNode
{
    BinaryAstNode(AstNodePtr lhsAstNode, AstNodePtr rhsAstNode)
            : lhsAstNode(std::move(lhsAstNode))
            , rhsAstNode(std::move(rhsAstNode))
    {
    }

    AstNodePtr lhsAstNode;
    AstNodePtr rhsAstNode;
};

struct AstStart : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {sql.first.c_str(), sql.second};
    }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsqlQuery : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstOrPredicate : public BinaryAstNode
{
    using BinaryAstNode::BinaryAstNode;

    SQL buildQuery()
    {
        SQL lhsSql = GETSQL(lhsAstNode);
        SQL rhsSql = GETSQL(rhsAstNode);
        auto sqlParams = lhsSql.second;
        sqlParams.insert(rhsSql.second.begin(), rhsSql.second.end());
        auto sqlQuery =
            FORMAT("({} OR {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *lhs = GETEXPRESSION(lhsAstNode);
        auto *rhs = GETEXPRESSION(rhsAstNode);

        return supersonic::Or(lhs, rhs);
    };
};

struct AstAndPredicate : public BinaryAstNode
{
    using BinaryAstNode::BinaryAstNode;

    SQL buildQuery()
    {
        SQL lhsSql = GETSQL(lhsAstNode);
        SQL rhsSql = GETSQL(rhsAstNode);
        auto sqlParams = lhsSql.second;
        sqlParams.insert(rhsSql.second.begin(), rhsSql.second.end());
        auto sqlQuery =
            FORMAT("({} AND {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *lhs = GETEXPRESSION(lhsAstNode);
        auto *rhs = GETEXPRESSION(rhsAstNode);

        return supersonic::And(lhs, rhs);
    };
};

struct AstNotPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {FORMAT("(NOT {})", sql.first.c_str()), sql.second};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *exp = GETEXPRESSION(astNode);

        return supersonic::Not(exp);
    };
};

struct AstParPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsTagPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {FORMAT("EXISTS (SELECT * FROM tag WHERE tag.meta_hash = "
                       "meta.meta_hash AND tag.name = '{}')",
                       sql.first.c_str()),
                sql.second};
    }

    const supersonic::Expression *buildExpression() override
    {
        throw std::logic_error("");
    };
};

struct AstQsStringPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsStringEqualPredicate : public BinaryAstNode
{
    using BinaryAstNode::BinaryAstNode;

    SQL buildQuery()
    {
        SQL lhsSql = GETSQL(lhsAstNode);
        SQL rhsSql = GETSQL(rhsAstNode);
        auto sqlParams = lhsSql.second;
        sqlParams.insert(rhsSql.second.begin(), rhsSql.second.end());
        auto sqlQuery =
            FORMAT("({} = {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *lhs = GETEXPRESSION(lhsAstNode);
        auto *rhs = GETEXPRESSION(rhsAstNode);

        return supersonic::Equal(lhs, rhs);
    };
};

struct AstQsStringInPredicate : public BinaryAstNode
{
    using BinaryAstNode::BinaryAstNode;

    SQL buildQuery()
    {
        SQL lhsSql = GETSQL(lhsAstNode);
        SQL rhsSql = GETSQL(rhsAstNode);
        auto sqlParams = lhsSql.second;
        sqlParams.insert(rhsSql.second.begin(), rhsSql.second.end());
        auto sqlQuery =
            FORMAT("({} LIKE {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *lhs = GETEXPRESSION(lhsAstNode);
        auto *rhs = GETEXPRESSION(rhsAstNode);

        return supersonic::StringContains(lhs, rhs);
    };
};

class AstQsStringMatchPredicate : public BinaryAstNode
{
    using BinaryAstNode::BinaryAstNode;

    SQL buildQuery()
    {
        SQL lhsSql = GETSQL(lhsAstNode);
        SQL rhsSql = GETSQL(rhsAstNode);
        auto sqlParams = lhsSql.second;
        sqlParams.insert(rhsSql.second.begin(), rhsSql.second.end());
        auto sqlQuery = FORMAT("({} LIKE ('%%{}%%'))", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

    const supersonic::Expression *buildExpression() override
    {
        auto *lhs = GETEXPRESSION(lhsAstNode);
        auto *rhs = GETEXPRESSION(rhsAstNode);

        return supersonic::StringContains(lhs, rhs);
    };
};

struct AstQsStringWithParenthesis : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsString : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery() { return GETSQL(astNode); }

    const supersonic::Expression *buildExpression() override
    {
        return GETEXPRESSION(astNode);
    };
};

struct AstQsGetItemName : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.name", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("name");
    }
};

struct AstQsGetItemText : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.text", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("text");
    }
};

struct AstQsGetItemType : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.type", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("type");
    }
};

struct AstQsGetItemAuthor : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.author", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("author");
    }
};

struct AstQsGetItemSourceTitle : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.source_title", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("source_title");
    }
};

struct AstQsGetItemSourceUrl : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery() { return {"meta.source_url", {}}; }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::NamedAttribute("source_url");
    }
};

struct AstQsGetTagValue : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {FORMAT("(SELECT tag.value FROM tag WHERE tag.meta_hash = "
                       "meta.meta_hash AND tag.name = '{}')",
                       sql.first.c_str()),
                sql.second};
    }

    const supersonic::Expression *buildExpression() override
    {
        throw std::logic_error("");
    }
};

struct AstQsIdentifier : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    std::string get_identifier()
    {
        std::string s = ctx.getText();
        return {&s[1], s.size() - 2};
    }

    SQL buildQuery()
    {
        std::string id = get_identifier();
        std::string hash = get_hash(id);
        std::unordered_map<std::string, std::string> m;
        m.insert({hash, id});
        return {FORMAT("{}", hash.c_str()), m};
    }

    const supersonic::Expression *buildExpression() override
    {
        return supersonic::ConstString(get_identifier());
    }
};
