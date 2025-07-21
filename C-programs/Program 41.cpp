/*
program 41
26.5.25
Reverse the digits of the given two digit number
*/
#include<stdio.h>
main()
{
	int a, b, c1, c2, d1, d2;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	c1 = d1 * 10;
	c2 = d2 * 1;
	b = c1 + c2;
	printf("%d", b);
}
	
