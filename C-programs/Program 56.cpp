/*
program 56
30.05.25
Given integer number is leap year or not using implicit check
*/
#include<stdio.h>
main()
{
	int a, d1;
	scanf("%d", &a);
	d1 = a % 4;
if (d1)
    printf("%d is not a leap year", a);
else
   printf("%d is a leap year", a);
}
