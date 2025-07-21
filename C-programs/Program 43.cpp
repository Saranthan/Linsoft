/*
program 43
26.5.25
Sum and product og a three digit number
*/
#include<stdio.h>
main() 
{
	int a, c1, c2, d1, d2, d3, d4;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	d3 = d2 % 10;
	d4 = d2 / 10;
	c1 = d1 + d2 + d4;
	c2 = d1 * d3 * d4;
    printf("%d", c1);
    printf("%d", c2);
    
}
