# phpcompilerbison
Mini PHP Compiler With if else , while and for written in YAML/bison/Lex-Yacc


#Use flex and bison to run

lex done.l && yacc -d -v ab.y && gcc lex.yy.c y.tab.c -ll -w && ./a.out < php_code.txt && python3 optimize.py intermediate_code.txt > output.txt
