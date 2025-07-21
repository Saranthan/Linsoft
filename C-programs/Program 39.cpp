/*
program 39
26.5.25
Sum of the digits of the given two digit number
*/
#include<stdio.h>
main()
{
	int a, c, d1, d2;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	c = d1 + d2;
	printf("%d", c);
}
