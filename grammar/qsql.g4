// This file is a part of quicksave project.
// Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>, Adam Morawski <poczta@adammorawski.pl>.

grammar qsql;

start : qsql_query EOF;

qsql_query : K_WHERE predicate;

predicate
 : or_predicate
 | and_predicate
 | not_predicate
 | par_predicate
 | qs_predicate
;

or_predicate
 : '(' predicate K_OR predicate ')'
;

and_predicate
 : '(' predicate K_AND predicate ')'
;

not_predicate
 : K_NOT predicate
;

par_predicate
 : '(' predicate ')'
;

qs_predicate
 : qs_tag_predicate
 | qs_string_predicate
;

qs_tag_predicate
 : K_TAG qs_string
;

qs_string_predicate
 : qs_string_equal_predicate
 | qs_string_in_predicate
 | qs_string_match_predicate
;

qs_string_equal_predicate
 : qs_string EQUAL qs_string
;

qs_string_in_predicate
 : qs_string K_IN qs_string
;

qs_string_match_predicate
 : qs_string K_MATCH qs_string
;

qs_string_with_parenthesis
 : '(' qs_string ')'
;

qs_string
 : qs_string_with_parenthesis
 | qs_get_item_name
 | qs_get_item_text
 | qs_get_item_type
 | qs_get_item_author
 | qs_get_item_source_title
 | qs_get_item_source_url
 | qs_get_tag_value
 | qs_identifier
;

qs_get_item_name
 : K_NAME
;

qs_get_item_text
 : K_TEXT
;

qs_get_item_type
 : K_TYPE
;

qs_get_item_author
 : K_AUTHOR
;

qs_get_item_source_title
 : K_SOURCE
;

qs_get_item_source_url
 : K_URL
;

qs_get_tag_value
 : K_GET qs_string
 | K_GET '(' qs_string ')'
;

qs_identifier
 : IDENTIFIER
;

IDENTIFIER
 : '"' (~'"' | '\\\"')* '"'
 | '\'' (~'\'' | '\\\'')* '\'';
// | [a-zA-Z_] [a-zA-Z_0-9]*
//;

EQUAL : '=';
K_IN : I N;
K_MATCH : '~';
K_NAME : N A M E;
K_TEXT : T E X T;
K_TYPE : T Y P E;
K_AUTHOR : A U T H O R;
K_SOURCE : S O U R C E;
K_URL : U R L;
K_GET : G E T;
K_TAG : T A G;
K_NOT : N O T;
K_AND : A N D;
K_OR : O R;
K_FROM : F R O M;
K_TILL : T I L L;
K_WHERE : W H E R E;

fragment DIGIT : [0-9];

fragment A : [aA];
fragment B : [bB];
fragment C : [cC];
fragment D : [dD];
fragment E : [eE];
fragment F : [fF];
fragment G : [gG];
fragment H : [hH];
fragment I : [iI];
fragment J : [jJ];
fragment K : [kK];
fragment L : [lL];
fragment M : [mM];
fragment N : [nN];
fragment O : [oO];
fragment P : [pP];
fragment Q : [qQ];
fragment R : [rR];
fragment S : [sS];
fragment T : [tT];
fragment U : [uU];
fragment V : [vV];
fragment W : [wW];
fragment X : [xX];
fragment Y : [yY];
fragment Z : [zZ];

SPACES
 : [ \u000B\t\r\n] -> channel(HIDDEN)
;