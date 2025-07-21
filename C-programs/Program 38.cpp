/*
program 38
26.5.25
Find the digits of the given 2 digit number
*/
#include<stdio.h>
main() 
{
	int a, d1, d2;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	printf("%d", d1);
	printf("%d", d2);
}
