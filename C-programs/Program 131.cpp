/*
program 131
10.07.25
Find the index of the biggest and smallest of 10 numbers 
in an array
*/
#include <stdio.h>
main()
{
	int a[10], d, c, i, n, b;
	i = 0;
 while( i <= 9)
  {
  	scanf("%d", &a[i]);
  	i = i + 1;
  	}
  	c = 9999;
  	d = 0;
  	
  	i = 0;
  	while(i <= 9)
  	 {
  	 	
  	 if (a[i] > d)
	    {
	    	c = a[i];
	    	b = i;
		 }
		 else
		    if (a[i] < c)
			 {
			 	d = a[i];
			 	n = i;
			  }
			  
			  i = i + 1;
	
	   }
	     d = b;
	     c = n;
	   
	   printf("%d", d);
	   printf("\n");
	  
	   printf("%d", c);
}
