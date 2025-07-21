/*
program 94
13.06.25
Print the pattern
*/
#include<stdio.h>
main()
{
	int n, d, c1, c2, a;
	n = 1;
	a = 3;
	d = 1;
	while(d <= 3)
	 {
	 	c1 = 1;
	 while(c1 <= a)
	 
	  {
	  	printf(" ");
	  	c1 = c1 + 1;
	   }
	     c1 = 1;
	   while(c1 <= n)
	    {
	    	printf("%d", c1);
	    	c1 = c1 + 1;
	    	
	     }
		 d = d + 1;
		 a = a - 1;
		 n = n + 2;
		 printf("\n");	
	 }
	 n = 7;
	 a = 0;
	 d = 1;
	 while(d <= 4)
	  {
	  	c2 = 1;
	  	while(c2 <= a)
	  	 {
	  	 	printf(" ");
	  	 	c2 = c2 + 1;
	  	  }
	  	  c2 = 1;
	  	  while(c2 <= n)
	  	   {
	  	   	 printf("%d", c2);
	  	   	 c2 = c2 + 1;
	  	   	 }
	  	   	 d = d + 1;
	         a = a + 1;
			 n = n - 2;
			 printf("\n"); 	  
	  	 }
	
}
