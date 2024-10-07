%{
 #include<stdio.h>
 #include <string.h>
 #include"y.tab.h"
 extern int yylval;
 int line_number = 0; // Corrected line_number initialization
%}
%%
[-+]?[0-9]+ {yylval=atoi(yytext);
      return integer;
      }
[-+]?[0-9]*[.][0-9]+ {yylval=atoi(yytext);
      return FLOAT;
      } 
STOP  {return STOP ;}
true {return TR ;}
false {return FL ;}
break {return BREAK ;}
default {return DEFAULT ;}
this {return THIS ;}
for {return FOR;}
switch {return SWITCH ;}
println {return PRINTLN ;}
print {return PRINT ;}
if      { return IF; }
case { return CASE; }
else    { return ELSE; }
while   { return WHILE; }
int     { return INT; }
float   { return FLOATV; }
boolean { return BOOLEAN; }
void    { return VOID; }
double  { return DOUBLE; }
String  { return STRING; }
char    { return CHAR; }
class   {return CLASS ;}
def     {  return DEF;  }
return  {return RETURN ;}
[a-zA-Z][a-zA-Z00-9]* {    return IDENTIFIER ;
       }
".." { return D ;}
"*/"  {return cmtc ;}
"/*"  {return cmto ;}
" "    { }
"++" {return DPLUS ;}
"==" {return EQ ;}
">=" {return GQ ;}
"<=" {return LQ ;}
">"  { return G ;}
"<"  {return L ;} 
"->" {return ARR ;}
"//" {return DSLASH ;}
\"([^\\\"]|\\.)*\"    {return DQSTRG ;}
\'([^\\\']|\\.)*\'    {return SQSTRG ;}
[\t] ;
. return yytext[0];
%%
int yywrap()
{
return 1;
}
