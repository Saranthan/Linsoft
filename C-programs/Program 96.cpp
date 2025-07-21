/*
program 96
19.06.25
Print the pattern
*/
#include<stdio.h>
main()
{
	int n1, a1, a2, n2, n3, c1, c2, d1, d2;
	n1 = 0;
	a1 = 5;
	d1 = 1;
while(d1 <= 6)
   {
   	printf(" ");
   	d1 = d1 + 1;
	   }
     printf("*");
     printf("\n");
	 
	 n2 = 1;
	 a1 = 5;
	 d1 = 1;
	 while(d1 <= 5)
	  {
	  	c1 = 1;
	  	while(c1 <= a1)
	    {
	    	printf(" ");
	    	c1 = c1 + 1;
	     }
	     c2 = 1;
	     printf("*");
	     
	     while(c2 <= n2)
	      {
	      	printf(" ");
	      	c2 = c2 + 1;
	    
	       }
		  printf("*");
		  a1 = a1 - 1;
		  n2 = n2 + 2;
		  
		  d2 = 1;
		  d1 = d1 + 1;
		   printf("\n");
			  }
			
			  while(d2 <= 7)
			   {
			   	   printf("* ");
				   d2 = d2 + 1;
				   

			   }
			
	
		}
			  
	
