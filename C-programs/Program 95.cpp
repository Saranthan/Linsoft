/*
program 95
15.06.25
Print the pattern
*/
#include<stdio.h>
main()
{
	int n, c1, c2, d, c3, a;
	n = 7;
	a = 0;
	c1 = 1;
	while(c1 <= 6)
	 {
	 	printf("*");
	 	c1 = c1 + 1;
	 	
	 	}
	 	printf("\n");
	  n = 5;
	  a = 4;
	  c2 = 1;
	  while(c2 <= n)
	   {
	     printf("*");
	   	c3 = 1;
	   	while(c3 <= a)
	   	 {
	   	 	printf(" ");
	   	 	c3 = c3 + 1;
	   	 	
	   	   }
	   	   printf("*");
	       c2 = c2 + 1;
	   	   printf("\n");   
	   	   
	   	   
	   }
	   n = 6;
	   a = 0;
	   c1 = 1;
	   while(c1 <= 6)
	    {
	    	printf("*");
	    	c1 = c1 + 1;
	    	
	    	
		}
		
}
