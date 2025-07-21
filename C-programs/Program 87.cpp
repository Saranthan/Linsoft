/*
program 87
07.06.25
Print the pattern
*/
#include<stdio.h>
main()
{
	int n, c, d1, d2,  a;
	n = 1;
	a = 4;
	c = 1;
 while(c <= 5)
 {
    d1 = 1;
 while (d1 <= a)
 {
 	printf("-");
 	d1 = d1 + 1;
    }
	while(d1 <= 5)
	{
		printf("*");
		d1 = d1 + 1;
	}
	c = c + 1;
	a = a - 1;
	n = n + 1;
	printf("\n"); 	
 }
    n = 5;
    a = 1;
    c = 1;
 while(c <= 4)
 {
 	 d2 = 1;
 while(d2 <= a)
 {
 	printf("-");
 	d2 = d2 + 1;
 	
 	}
 	while(d2 <= 5)
 	{
 		printf("*");
 		d2 = d2 + 1;
	}
	c = c + 1;
	a = a + 1;
	n = n - 1;
	printf("\n");
	
		
 }	 	
}
