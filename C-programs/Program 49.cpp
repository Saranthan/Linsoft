/*
program 49
29.5.25
Check whether the given integer number is two digit or not
*/
#include<stdio.h>
main() 
{
   int a;
   scanf("%d", &a);
if ( a >= 10 && a <= 99)
   printf("%d is a two digit number", a);
else
   printf("%d is not a two digit number", a);
}
