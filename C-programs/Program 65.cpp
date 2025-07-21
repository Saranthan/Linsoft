/*
program 65
31.05.25
Biggest among three integers using nested if ternary expression
*/
#include<stdio.h>
main()
{
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = a > b ? (a > c ? a : c) : (b > c ? b : c);
	printf("%d is bigger", d);
}
