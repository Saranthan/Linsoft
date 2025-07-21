/*
program 97
20.06.25
print the pattern
*/
#include<stdio.h>
main()
{
	int n1, a1, a2, d1, d2, n2, c1, c2;
	n1 = 7;
	a1 = 1;
	d1 = 1;
while(d1 <= 6)
  {
  	printf("* ");
  	

  	
  	
  	d1 = d1 + 1;
    }
    printf("\n");
	n2 = 7;
	a2 = 5;
	d1 = 1;
	while(d1 <= 4)
	 {
	 	c1 = 1;
	 while(c1 <= a1)
	  {
	  	printf(" ");
	  	c1 = c1 + 1;
	    }
		printf("*");
		
		
		
		
		c2 = 1;
		while(c2 <= n2)
		 {
		 	printf(" ");
		 	c2 = c2 + 1;
			 }
			 printf("*");
			 printf("\n");
			
			 a1 = a1 + 1;
			 n2 = n2 - 2;	
		     
		    
		     d2 = 1;
		     d1 = d1 + 1;
		     
		     
		 }
		     while(d2 <= 5)
		      {
		      	printf(" ");
		      	d2 = d2 + 1;
		      	
			  }
			  printf("*");
			  
			  
		 
		 	
}

