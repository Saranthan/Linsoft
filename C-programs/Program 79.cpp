/*
program 79
02.06.25
Print the pattern 5 times with n no . of stars
*/
#include<stdio.h>
main()
{
	int c, n;
	scanf("%d", &n);
	c = 1;
while (c <= n)
{
	printf("*");
	c = c + 1;
}
    printf("\n");
    
}
