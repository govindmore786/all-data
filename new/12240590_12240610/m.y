%{
#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int flag=0;
 int yyparse();
void yyerror(const char *s);
%}
%token integer FLOAT IF ELSE WHILE INT BOOLEAN VOID DOUBLE STRING CHAR DEF IDENTIFIER CLASS EQ GQ LQ G L PRINT SQSTRG DQSTRG FL TR RETURN SWITCH CASE BREAK DEFAULT FOR THIS PRINTLN ARR D  STOP DSLASH DPLUS FLOATV cmtc cmto
%start start
%%
start : begin end ;//it is the start symbol that identifies the begining of the code and the end of the code
begin : | statements  ;//defining the begin
end : STOP { return 0 ;} ;//whenever the STOP will be read by the compiler it will stop execution as there isn't any particular thing in the groovy that identifies the ending therefore we created this
ifelsestmt : IF '(' cndtn ')''{' statements '}' smcln //defining the if else statement
           | IF '(' cndtn ')''{' statements '}' ELSE '{' statements '}' smcln
           |IF '(' cndtn ')''{' statements '}' ELSE IF '(' cndtn ')''{' statements '}' ELSE '{' statements '}' smcln;
whilestmt : WHILE '(' cndtn ')''{' statements '}' smcln ;//defining the while statement
cndtn : any EQ any //defining the conditions for the different statement
        |any GQ any 
        |any LQ any 
        |any L any 
        |any G any ;
any: IDENTIFIER | integer ;//defining the tokens that can be taken as input in condition
both : both any | any ;//defining the combinations of tokens that can be taken as input in condition
statements : statement //defining the combinations of different statements that can be taken as input in begin
           | statements statement
           ;

statement : def_statement //defining all the statements 
          | function_definition
          | variable_definition
          | ifelsestmt
          | print
          |rtrn
          |vd
          |whilestmt
          |swtchcs
          |frlp
          |CMMT
          |array
          |this
          |functioncall
          |dec
          |additionsint
          |subtractionsint
          |multiplicationsint
          |divisionsint
          |additionsvar
          |subtractionsvar
          |multiplicationsvar
          |divisionsvar
          |modele
          |cmmt
          |incdc
          |Declarations
          ;
vd : IDENTIFIER'('')''{' statements '}' smcln ;//defining the void function 
rtrn : RETURN TR //defining rerturn
     | RETURN FL 
     | RETURN integer
     | 
     ;

Declarations : Declaration //defining the combinations of declarations
              | Declarations ',' Declaration 
              | Declarations Declaration  
              ;  
Declaration : def_statement //defining the declarations
              | variable_definition
              | INT IDENTIFIER 
              | FLOATV IDENTIFIER 
              | CHAR IDENTIFIER 
              | DOUBLE IDENTIFIER 
              |INT IDENTIFIER '=' integer
              |FLOATV IDENTIFIER '=' FLOAT
              |INT IDENTIFIER '=' anyarth
              ;
swtchcs : SWITCH'('Declaration')' '{'cases DEFAULT ':' statements '}' |
SWITCH'('IDENTIFIER')' '{'cases DEFAULT ':' statements'}'  ;//defining the switch case statement
cases : case //defining the cases for switch case statement
       | cases case ;
case : CASE expression':' statements BREAK //defining the cases for cases
     |CASE '{'cndtn'}'':' statements BREAK;
frlp : FOR '(' Declaration ';' cndtn ';' incdc ')' '{'statements'}' smcln ;//defining the for loop
incdc: IDENTIFIER '=' IDENTIFIER '+' integer//defining the increment and decrement operations
     | IDENTIFIER '=' IDENTIFIER '-' integer
     |IDENTIFIER '=' IDENTIFIER '*' integer
     |IDENTIFIER '=' IDENTIFIER '/' integer
     |IDENTIFIER DPLUS
     |IDENTIFIER'-''-';
smcln : ';' //defining semicolon 
      |
      ;
print : pt SQSTRG smcln//defining the print statement
      |pt DQSTRG smcln
      |pt '(' SQSTRG  ')' smcln
      |pt '(' DQSTRG  ')' smcln
      |pt integer
      |pt IDENTIFIER 
      ;
pt : PRINT | PRINTLN ;//as groovy accepts both print as well println therefore defining the both
def_statement : DEF IDENTIFIER smcln//defining the def statement
              ;
this : THIS'.'IDENTIFIER'='IDENTIFIER smcln;//defining this
function_definition : DEF IDENTIFIER '(' parameters ')' '{' statements '}' smcln//defining the function using def
                    ;
CMMT : cmto identifiers cmtc ;//defining the multiline comment
cmmt : DSLASH both ;//defining the single line comment
identifiers : IDENTIFIER |identifiers IDENTIFIER ;//defining the identifiers
parameters : IDENTIFIER//defining the parameters that will be used in function definition
           | parameters ',' IDENTIFIER
           |parameters  IDENTIFIER
           ;

variable_definition : DEF IDENTIFIER '=' expression smcln //defining the variables using def
                    |DEF IDENTIFIER '=' '{' statements '}' smcln
                    |DEF IDENTIFIER '=' anyarth smcln
                    |DEF IDENTIFIER '=' SQSTRG smcln
                     |DEF IDENTIFIER '=' DQSTRG smcln
                    ;
expression : integer//defining the expression that will be used in variable definition
           | FLOAT
           ;
array : DEF IDENTIFIER '=' '['elmts']' smcln//defining the array
      ;
elmts : elmts elmt | elmt ;//defining the combinations of elements for array 
elmt : integer','| IDENTIFIER ','|SQSTRG','| DQSTRG','|chr;//defining the elements for array 
chrs : chrs chr | chr ;//defining the different combinations that can be taken as input in the array
chr :integer| IDENTIFIER |SQSTRG|DQSTRG ;//defining the different combinations that can be taken as input in the array
functioncall :IDENTIFIER'('')'smcln //defining the functioncall
   |IDENTIFIER'('IDENTIFIER')'smcln ;
dec : chrs ARR statements smcln ;//defining the declaration using arrow
additionsint : additionsint additionint|additionint ;//defining the addition,multiplication,subtraction,division for multiple times from line 126 to 141
additionint : integer'+'|integer;
additionsvar : additionsvar additionvar smcln|additionvar smcln ;
additionvar : IDENTIFIER'+'|IDENTIFIER;
subtractionsint : subtractionsint subtractionint smcln|subtractionint smcln;
subtractionint : integer'-'|integer;
subtractionsvar : subtractionsvar subtractionvar smcln|subtractionvar smcln;
subtractionvar : IDENTIFIER'-'|IDENTIFIER;
divisionsint : divisionsint divisionint smcln|divisionint smcln;
divisionint : integer'/'|integer;
divisionsvar : divisionsvar divisionvar smcln|divisionvar smcln;
divisionvar : IDENTIFIER'/'|IDENTIFIER;
multiplicationsint : multiplicationsint multiplicationint smcln |multiplicationint smcln  ;
multiplicationint : integer'*'|integer;
multiplicationsvar : multiplicationsvar multiplicationvar smcln|multiplicationvar smcln;
multiplicationvar : IDENTIFIER'*'|IDENTIFIER;
anyarth:|additionsint
          |subtractionsint
          |multiplicationsint
          |divisionsint
          |additionsvar
          |subtractionsvar
          |multiplicationsvar
          |divisionsvar ;
modele :IDENTIFIER'['integer D integer']''=' '['elmts']' smcln ;//if a range of the elements should be modified in the array
%% 

void main() 
{
    printf("\nenter anything\n");
    yyparse();
     if(flag==0) 
   	printf("\nThe code is Valid\n"); 
}
void yyerror(const char *s) {
    printf("Error: %s\n", s);
    flag = 1;
}
        


  


