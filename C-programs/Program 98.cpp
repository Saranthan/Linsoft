/*
program 98
20.06.25
Print the pattern
*/
#include<stdio.h>
main()
{
	int n1, n2, n3, c1, c2, c3, c4, d1, d2, d3, a1, a2, a3;
	n1 = 0;
	a1 = 4;
	d1 = 1;
while(d1 <= 5)
   {
   	printf(" ");
   	d1 = d1 + 1;
	   }
     printf("*");
     printf("\n");
	 
	 n2 = 1;
	 a1 = 4;
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
			   
	               n3 = 7;
                   a2 = 1;
	               d2 = 1;
	               while(d2 <= 4)
	                 {
                	 	c3 = 1;
	                    while(c3 <= a2)
	                     {
	                      	printf(" ");
	  	                    c3 = c3 + 1;
	                      }
		                   printf("*");
		                   c4 = 1;
	                       while(c4 <= n3)
		                     {
		 	                   printf(" ");
		 	                   c4 = c4 + 1;
			                  }
			                  printf("*");
			                  printf("\n");
			
			                  a2 = a2 + 1;
			                  n3 = n3 - 2;
							  d2 = d2 + 1;	
                            }
		                while(d3 <= 4)
		                  {
		      	             printf(" ");
		      	             d3 = d3 + 1;
		      	
			               }
			               printf("*");
}
