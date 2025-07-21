/*
program 77
02.06.25
Print the numbers is 500,450,400......0
*/
#include<stdio.h>
main()
{
	int c;
	c = 500;
while (c >= 0)
{
	printf("%d", c);
	c = c - 50;
}
}
