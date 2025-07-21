/*
program 63
31.05.25
Biggest among three integer number using ternary expression
*/
#include<stdio.h>
main()
{
	int a, b, c, d, e;
	scanf("%d %d %d", &a, &b, &c);
	d = a > b ? a : b;
	e = d > c ? d : c;
	printf("%d is bigger", e);
}
