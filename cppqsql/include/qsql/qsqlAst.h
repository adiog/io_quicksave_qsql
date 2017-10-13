// This file is a part of quicksave project.
// Copyright (c) 2017 Aleksander Gajewski <adiog@quicksave.io>.


#include <antlr4-runtime.h>
#include <qsql/qsqlVisitor.h>
#include <folly/Format.h>


using SQL = std::pair<std::string, std::unordered_map<std::string, std::string>>;
using CTX = antlr4::ParserRuleContext;


struct AstNode
{
    virtual ~AstNode() = default;
    virtual SQL buildQuery() = 0;
};

using AstNodePtr = antlrcpp::Any; //std::unique_ptr<AstNode>;


#define GETSQL(node) node.as<std::shared_ptr<AstNode>>()->buildQuery()
#define FORMAT(...) (folly::format(__VA_ARGS__).str())
std::string get_hash(std::string str)
{
    return str;
}


struct NullaryAstNode : public AstNode
{
    NullaryAstNode(CTX * ctx) : ctx(*ctx)
    {
    }

    CTX& ctx;
};


struct UnaryAstNode : public AstNode
{
    UnaryAstNode(AstNodePtr astNode) : astNode(std::move(astNode)) {}

    AstNodePtr astNode;
};


struct BinaryAstNode : public AstNode
{
    BinaryAstNode(AstNodePtr lhsAstNode, AstNodePtr rhsAstNode)
            : lhsAstNode(std::move(lhsAstNode))
            , rhsAstNode(std::move(rhsAstNode))
    {}

    AstNodePtr lhsAstNode;
    AstNodePtr rhsAstNode;
};


struct AstStart : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {
                sql.first.c_str(),
                sql.second
        };
    }
};


struct AstQsqlQuery : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
};


struct AstPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
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
        auto sqlQuery = FORMAT("({} OR {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }
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
        auto sqlQuery = FORMAT("({} AND {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }

};


struct AstNotPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {
                FORMAT("(NOT {})", sql.first.c_str()),
                sql.second
        };
    }
};


struct AstParPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
};


struct AstQsPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
};


struct AstQsTagPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {
                FORMAT("EXISTS (SELECT * FROM tag WHERE tag.meta_hash = meta.meta_hash AND tag.name = '{}')",
                       sql.first.c_str()),
                sql.second
        };
    }
};


struct AstQsStringPredicate : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
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
        auto sqlQuery = FORMAT("({} = {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }
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
        auto sqlQuery = FORMAT("({} LIKE {})", lhsSql.first.c_str(), rhsSql.first.c_str());
        return {sqlQuery, sqlParams};
    }
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
};


struct AstQsStringWithParenthesis : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
};


struct AstQsString : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        return GETSQL(astNode);
    }
};


struct AstQsGetItemName : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.name", {}};
    }
};


struct AstQsGetItemText : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.text", {}};
    }
};


struct AstQsGetItemType : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.type", {}};
    }
};


struct AstQsGetItemAuthor : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.author", {}};
    }
};


struct AstQsGetItemSourceTitle : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.source_title", {}};
    }
};


struct AstQsGetItemSourceUrl : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    SQL buildQuery()
    {
        return {"meta.source_url", {}};
    }
};


struct AstQsGetTagValue : public UnaryAstNode
{
    using UnaryAstNode::UnaryAstNode;

    SQL buildQuery()
    {
        SQL sql = GETSQL(astNode);
        return {FORMAT("(SELECT tag.value FROM tag WHERE tag.meta_hash = meta.meta_hash AND tag.name = '{}')", sql.first.c_str()), sql.second};
    }
};


struct AstQsIdentifier : public NullaryAstNode
{
    using NullaryAstNode::NullaryAstNode;

    std::string get_identifier()
    {
        std::string s = ctx.getText();
        return {&s[1], s.size()-2};
    }

    SQL buildQuery()
    {
        std::string id = get_identifier();
        std::string hash = get_hash(id);
        std::unordered_map<std::string, std::string> m;
        m.insert({hash, id});
        return {FORMAT("{}", hash.c_str()), m};
    }
};
