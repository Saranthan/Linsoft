/*
program 48
29.5.25
Check whether the given number is a single digit or not
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
if (a >= 0 && a <= 9)
   printf("%d is an one digit number", a);
else
   printf("%d is not an one digit number", a);
}
