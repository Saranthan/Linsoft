/*
program 35
26.5.25
Find the value of the expression a/b
*/
#include<stdio.h>
main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a % b;
	printf("%d", c);
}
