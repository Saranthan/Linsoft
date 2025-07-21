/*
program 64
31.05.25
Smallest of three integer numbers using ternary expression
*/
#include<stdio.h>
main()
{
	int a, b, c, d, e;
	scanf("%d %d %d", &a, &b, &c);
	d = a < b ? a : b;
	e = d < c ? d : c;
	printf("%d is smaller", e);
}
