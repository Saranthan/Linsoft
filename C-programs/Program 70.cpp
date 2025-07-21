/*
program 70
01.06.25
Given character is digit or not using ASCII value
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c", &a);
if ( a >= 48 && a <= 57)
    printf("%c is digit", a);
else
    printf("%c is not a digit", a);
}
