/*
program 40
26.5.25
Product of the digits of given two digit number
*/
#include<stdio.h>
main() 
{
	int a, c, d1, d2;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	c = d1 * d2;
	printf("%d", c);
}
