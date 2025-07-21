/*
program 133
11.07.25
Find the second biggest number in an array
*/
#include <stdio.h>
main()
{
	int c, d, i, a[10];
	i = 0;
	while(i <= 9)
	 {
	 	scanf("%d", &a[i]);
	 	i = i + 1;
	 }
     d = 0; 	
	 i = 0;
	 while(i <= 9)
	  {
	  	
	  if (a[i] > d)
	    
		  d = a[i];
	      
		 i = i + 1;
	   }
	      
	     c = 0;
	     i = 0;
	     while(i <= 9)
	      {
	       if (a[i] != d)
	       
		     if (a[i] > c)
		     
			   c = a[i];
		      
		      
			   i = i + 1;
           }
           printf("%d", c);
}
               



