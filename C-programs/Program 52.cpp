/*
program 52
30.05.25
Check whether the given operator is an arithmetic operator or not
*/
#include<stdio.h>
main() 
{
	char a;
	scanf("%c", &a);
if (a == '+' || a == '-' || a == '/' || a == '*')
    printf("%c is an arithmetic operator", a);
else
    printf("%c is not an arithmetic operator", a);
}

