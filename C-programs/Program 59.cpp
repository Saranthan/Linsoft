/*
program 59
30.05.25
Given integer number is even or odd using implicit check and logical operator
*/
#include<stdio.h>
main()
{
	int a, d1;
	scanf("%d", &a);
	d1 = a % 2;
if (!d1)
    printf("%d is even", a);
else  
    printf("%d is odd", a);    
}
