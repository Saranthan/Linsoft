/*
program 107
28.06.25
Multiplication table of 2
*/
#include<stdio.h>
main()
{
	int c, b;
	c = 1;
while(c <= 12)
 {
 	b = c * 2;
 	printf("%d * 2 = %d", c, b); 
 	c = c + 1;
 	printf("\n");
	}	
}

