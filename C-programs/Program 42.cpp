/*
program 42
26.5.25
Print the digits of the given three digit number
*/
#include<stdio.h>
main() 
{
	int a, d1, d2, d3, d4;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	d3 = d2 % 10;
	d4 = d2 / 10;
	printf("%d", d1);
	printf("%d", d3);
	printf("%d", d4);
}
