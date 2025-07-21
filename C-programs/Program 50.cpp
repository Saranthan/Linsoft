/*
program 50
29.5.25
Check whether the given number is one digit, two digit, three digit, four digit..
*/
#include<stdio.h>
main() 
{
	int a;
	scanf("%d", &a);
if (a >= 0 && a <= 9)
    printf("%d is an one digit number", a);
else
    
if (a >= 10 && a <= 99)
    printf("%d is a two digit number", a);
else
    
if (a >= 100 && a <= 999)
    printf("%d is a three digit number", a);
else

if (a >= 1000 && a <= 9999)
    printf("%d is a four digit number", a);
else 
    printf("%d is not a four digit number", a);
}
