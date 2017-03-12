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
 : qs_has_predicate
 | qs_string_predicate
;

qs_has_predicate
 : K_HAS qs_string
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
 | qs_get_item_freetext
 | qs_get_tag_value
 | qs_identifier
;

qs_get_item_freetext
 : K_FREETEXT
;

qs_get_tag_value
 : K_TAG qs_string
 | K_TAG '(' qs_string ')'
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
K_MATCH : M A T C H;
K_FREETEXT : 'freetext';
K_HAS : H A S;
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