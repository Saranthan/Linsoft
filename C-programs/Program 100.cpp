/*
program 100
22.06.25
print the pattern
*/
#include<stdio.h>
main()
{
	int n, c, d;
	n = 1;
	d = 1;
while(d <= 5)
 {
 	c = 1;
 while(c <= n)
  {
   
   if (c % 2 == 0)
    {
    	printf("-");
    	c = c + 1;

		}
		else
		 {
		 	printf("*");
		 	c = c + 1;
	        	 
		 }
           	
			
	  }	
       n = n + 1;
       printf("\n");
       d = d + 1;     
 }
 
 
 
}
