%{
#include "y.tab.h"  // Include Yacc-generated token definitions
%}

%%

# Define regular expressions for each token
[ \t]+              { /* Skip whitespace */ }
\n                  { yylineno++; return NEWLINE; }
"//"[^\n]*           { /* Single-line comments */ }
"int"               { return INT; }
"float"             { return FLOAT; }
"void"              { return VOID; }
"char"              { return CHAR; }

"if"                { return IF; }
"else"              { return ELSE; }
"while"              { return WHILE; }
"do"                { return DO; }
"for"               { return FOR; }
"return"            { return RETURN; }
"print"              { return PRINT; }

"=="                { return EQ; }
"!="                { return NE; }
"<="                { return LE; }
">="                { return GE; }
"++"                { return INC; }
"--"                { return DEC; }
"&&"                { return AND; }
"||"                { return OR; }
"!"                 { return NOT; }
"<"                 { return '<'; }
">"                 { return '>'; }
"="                 { return '='; }
"+"                 { return '+'; }
"-"                 { return '-'; }
""                 { return ''; }
"/"                 { return '/'; }
";"                 { return ';'; }
","                 { return ','; }
"{"                 { return '{'; }
"}"                 { return '}'; }
"("                 { return '('; }
")"                 { return ')'; }

# Define patterns for identifiers and numbers
[A-Za-z_][A-Za-z0-9_]* { return ID; }
[0-9]+               { yylval = atoi(yytext); return NUM; }
[0-9]*\.[0-9]+       { yylval = atof(yytext); return REAL; }
"\"[^\"]*\""         { yylval = strdup(yytext); return STRING; }
"'[^']'"             { yylval = strdup(yytext); return CHARACTER_LITERAL; }

# Handle errors and invalid tokens
.                    { yyerror("Invalid character"); }

%%

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");  // Open input file
        if (!yyin) {
            fprintf(stderr, "Error opening file: %s\n", argv[1]);
            return 1;
        }
    }

    yylex();  // Start lexical analysis
    fclose(yyin);  // Close the file after processing
    return 0;
}

int yywrap() {
    return 1;  // Indicate end of input
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
}

