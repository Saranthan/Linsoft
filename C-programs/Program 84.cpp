/*
program 84
05.06.25
print the given pattern
*/
#include<stdio.h>
main()
{
	int n, c, d;
	n = 5;
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
	n = n - 1;
	printf("\n");
}	

    n = 1;
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
	n = n + 1;
	printf("\n");  
}
}
  
