/*
program 47
29.5.25
Check whether the digits are palindrome or not
*/
#include<stdio.h>
main() 
{
	int a, b, c1, c2, c3, d1, d2, d3, d4;
	scanf("%d", &a);
	d1 = a % 10;
	d2 = a / 10;
	d3 = d2 % 10;
	d4 = d2 / 10;
	c1 = d1 * 100;
	c2 = d3 * 10;
	c3 = d4 * 1;
	b = c1 + c2 + c3;
if (a == b)
    printf("%d is a palindrome", a);
else
    printf("%d is not a palindrome", a);		 
}
