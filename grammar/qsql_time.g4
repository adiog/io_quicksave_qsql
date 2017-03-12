// This file is a part of quicksave project.
// Copyright (c) 2016 Aleksander Gajewski <adiog@brainfuck.pl>, Adam Morawski <poczta@adammorawski.pl>.

grammar qsql_time;

start : qsql_time_query EOF;

qsql_time_query
 : limits_query
;

limits_query
 : generic_from_query
 | generic_till_query
 | from_till_query
;

from_till_query
 : K_FROM datetime_limit K_TILL datetime_limit
;

generic_from_query
 : K_FROM from_query
;

generic_till_query
 : K_TILL till_query
;

from_query
 : precise_datetime_limit
 | last_timedelta
 | this_timedelta
;

precise_datetime_limit
 : datetime_limit
;

last_timedelta
 : K_LAST timedelta
;

this_timedelta
 : K_THIS timedelta
;

till_query
 : datetime_limit
;

datetime_limit
 : not_shifted_datetime
 | shifted_datetime
;

not_shifted_datetime
 : datetime_now
 | datetime_today
 | datetime_yesterday
 | datetime_weekday
// | datetime_month
 | slashed_date
 | hour_limit
 | detailed_date_time
;

detailed_date_time
 : slashed_date hour_limit
;

datetime_weekday
 : this_named_weekday
 | last_named_weekday
;

//datetime_month
// : this_named_month
// | last_named_month
//;

this_named_weekday
 : K_THIS? weekday
;

last_named_weekday
 : K_LAST weekday
;

//this_named_month
// : K_THIS? named_month
//;

//last_named_month
// : K_LAST named_month
//;

//named_month
// : january
//;

//january : K_JAN | K_JANUARY;

//K_JAN : J A N;
//K_JANUARY : J A N U A R Y;

weekday
 : monday
 | tuesday
 | wednesday
 | thursday
 | friday
 | saturday
 | sunday
;

monday : K_MON | K_MONDAY;
tuesday : K_TUE | K_TUESDAY;
wednesday : K_WED | K_WEDNESDAY;
thursday : K_THU | K_THURSDAY;
friday : K_FRI | K_FRIDAY;
saturday : K_SAT | K_SATURDAY;
sunday : K_SUN | K_SUNDAY;

K_MON : M O N;
K_MONDAY : M O N D A Y;
K_TUE : T U E;
K_TUESDAY : T U E S D A Y;
K_WED : W E D;
K_WEDNESDAY : W E D N E S D A Y;
K_THU : T H U;
K_THURSDAY : T H U R S D A Y;
K_FRI : F R I;
K_FRIDAY : F R I D A Y;
K_SAT : S A T;
K_SATURDAY : S A T U R D A Y;
K_SUN : S U N;
K_SUNDAY : S U N D A Y;


datetime_now
 : K_NOW
;

datetime_today
 : K_TODAY
;

datetime_yesterday
 : K_YESTERDAY
;

shifted_datetime
 : datetime_plus_timedelta
 | datetime_minus_timedelta
;

datetime_plus_timedelta
 : not_shifted_datetime K_PLUS timedelta
;

datetime_minus_timedelta
 : not_shifted_datetime K_MINUS timedelta
;

slashed_date
 : integer K_SLASH integer K_SLASH integer
;

hour_limit
 : semicolon_hour
 | am_hour
 | pm_hour
;

am_hour
 : integer K_AM
;

pm_hour
 : integer K_PM
;

semicolon_hour
 : integer K_SEMICOLON integer
;

timedelta : single_unit_timedelta+;

single_unit_timedelta
 :
 //delta_in_seconds |
   delta_in_minutes
 | delta_in_hours
// | delta_in_days
// | delta_in_weeks
// | delta_in_months
// | delta_in_years
;

delta_in_minutes
 : one_minute
 | more_minutes
;

one_minute : K_MINUTE;
more_minutes : integer K_MINUTES;

delta_in_hours
 : one_hour
 | more_hours
;

one_hour : K_HOUR;
more_hours : integer K_HOURS;

K_S : S;

K_PLUS : '+';
K_MINUS : '-';
K_SEMICOLON : ':';
K_SLASH : '/';

K_AM : A M;
K_PM : P M;

K_NOW : N O W;

K_TODAY : T O D A Y;
K_YESTERDAY : Y E S T E R D A Y;

K_SECOND : S E C O N D;
K_MINUTE : M I N U T E;
K_MINUTES : M I N U T E S;
K_HOUR : H O U R;
K_HOURS : H O U R S;
K_DAY : D A Y;
K_WEEK : W E E K;
K_MONTH : M O N T H;
K_YEAR : Y E A R;

K_THIS : T H I S;
K_LAST : L A S T;

K_FROM : F R O M;
K_TILL : T I L L;
K_WITHIN : W I T H I N;


qs_identifier
 : IDENTIFIER
;

IDENTIFIER
 : '"' (~'"' | '\\\"')* '"'
 | '\'' (~'\'' | '\\\'')* '\'';

integer : DIGIT+;

DIGIT
   : [0-9]
;

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