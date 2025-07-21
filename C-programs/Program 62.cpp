/*
program 62
31.05.25
Smallest among two integer numbers using ternary expression
*/
#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a < b ? a : b;
	printf("%d is smaller", c);
}
