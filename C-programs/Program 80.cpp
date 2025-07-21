/*
program 80
05.06.25
Print the pattern 5 times with n no. of stars
*/
#include<stdio.h>
main()
{
	int n, c, d;
	scanf("%d", &n);
	d = 1;
while (d <= 5)
{
	c = 1;
while (c <= n)
{
		
	printf("*");
	c = c + 1;
}
    d = d + 1;
	printf("\n");
}
}
