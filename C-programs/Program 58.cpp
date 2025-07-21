/*
program 58
30.05.25
Given integer number is divisible by 5 or not using implicit check and logical operator
*/
#include<stdio.h>
main() 
{
	int a, d1;
	scanf("%d", &a);
	d1 = a % 5;
if (!d1)
    printf("%d is divisible by 5", a);
else
    printf("%d is not divisible by 5", a);
}
