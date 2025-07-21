/*
program 61
31.05.25
Biggest among two integer number using ternary expression
*/
#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a > b ? a : b;
	printf("%d is bigger", c);
}
