/*
program 91
12.06.25
Print the pascal's triangle 
*/
#include<stdio.h>
main()
{
	int n, d, c, a;
	n = 1;
	a = 3;
	d = 1;
	while(d <= 4)
	 {
	 	c = 1;
	 while(c <= a)
	  {
	  	printf(" ");
	  	c = c + 1;
	   }
	   c = 1;
	   while(c <= n)
	    {
	    	printf("*");
	    	c = c + 1;
	    }
	    d = d + 1;
		a = a - 1;
		n = n + 2;
		printf("\n");	
	 }
}
