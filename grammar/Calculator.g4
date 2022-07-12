grammar Calculator;

aexp : REAL                         #Atom
     | '(' inner=aexp ')'           #Brackects
     | left=aexp '^' right=aexp     #Exp
     | left=aexp '/' right=aexp     #Div
     | left=aexp '*' right=aexp	 #Mult
     | left=aexp '+' right=aexp	 #Add
     | left=aexp '-' right=aexp     #Sub
     ;
     
REAL  : ([0-9]+[.][0-9]+)|([0-9]+) ;
WS   : [ \r\n\t] -> skip ;