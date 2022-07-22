grammar Lite;

prog : stat+
     ;

stat : expr NL          #statExpr
     | ID '=' expr  NL  #statAssignExpr
     | NL               #statNewLine
     ;

expr : '-' expr             #exprNegate 
     | expr ('+'|'-') expr  #exprAddSub
     | expr ('*'|'/') expr  #exprMulDiv
     | '(' expr ')'         #exprParen
     | INT                  #exprINT  
     | ID                   #exprID 
     ;

ID :    [a-zA-Z]+ ;
INT:    [0-9]+;
NL: '\r'? '\n' ;
