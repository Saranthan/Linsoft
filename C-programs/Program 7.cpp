/*
program 7
18.5.25
Find the value of the given expression
*/
#include<stdio.h>
main()
{
	int a, b, c;
	a = 2;
	b = 3;
	c = 4 * (a * a * a) * (b * b * b) + 3 * (a * a) * (b * b) + 2 * (a * b) + 5;
	printf("%d", c);
}
