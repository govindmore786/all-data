%{
# Groovy Yacc setup
# Variables to manage scope, symbols, and labels
int scope_index = 1;
List<Integer> stack = new ArrayList<>();
List<String> labels = new ArrayList<>();
int label_num = 0;
int top = -1;
List<String> symbol_table = new ArrayList<>();
int counter = 0;

void scope_start() {
    stack.add(scope_index++);
}

void scope_end() {
    if (!stack.isEmpty()) {
        stack.remove(stack.size() - 1);
    }
}

String new_label() {
    label_num++;
    return "L" + label_num;
}

void push_value(String value) {
    symbol_table.add(++top, value);
}

String pop_value() {
    return symbol_table.remove(top--);
}

void yyerror(String msg) {
    println "Error: ${msg} at line " + yyline();
}

int yyline() {
    return yylineno;  # Defined by lexer
}

void codegen_assign() {
    String var = pop_value();
    String expr = pop_value();
    println "${var} = ${expr};";
}

void codegen_arithmetic() {
    String op = pop_value();
    String right = pop_value();
    String left = pop_value();
    String result = "temp" + counter++;
    println "${result} = ${left} ${op} ${right};";
    push_value(result);
}

%}

%token INT FLOAT VOID CHAR
%token ID NUM STRING CHARACTER_LITERAL
%token IF ELSE WHILE DO FOR RETURN PRINT
%token EQ NE LE GE INC DEC AND OR NOT
%left '+' '-'
%left '*' '/'
%right '='
%start program

%%

program
    : statements
    ;

statements
    : statement
    | statements statement
    ;

statement
    : declaration
    | expression
    | control_structure
    | compound_statement
    | ';'
    ;

declaration
    : type ID ';'
    {
        println "Declare variable: ${$2} of type ${$1}";
        push_value($2);
        # Symbol table insertion logic
    }
    ;

type
    : INT { $$ = 'int'; }
    | FLOAT { $$ = 'float'; }
    | CHAR { $$ = 'char'; }
    | VOID { $$ = 'void'; }
    ;

expression
    : assignment
    | arithmetic_expression
    ;

assignment
    : ID '=' expression
    {
        push_value($1);
        codegen_assign();
    }
    ;

arithmetic_expression
    : expression '+' expression
    {
        push_value('+');
        codegen_arithmetic();
    }
    | expression '-' expression
    {
        push_value('-');
        codegen_arithmetic();
    }
    | '(' expression ')'
    ;

compound_statement
    : '{' statements '}'
    {
        scope_start();
    }
    ;

control_structure
    : IF '(' expression ')' statement
    {
        codegen_if();
        println "End IF structure";
    }
    | WHILE '(' expression ')' statement
    {
        codegen_while();
        codegen_end_while();
    }
    ;

%%

# Groovy parser main function
void main() {
    // Create the parser and parse the input
    Parse::Yapp::Parser parser = new Parse::Yapp::Parser();
    parser.parse();
}

main();
