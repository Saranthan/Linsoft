/*
program 85
07.06.25
Print the pattern
*/
#include<stdio.h>
main()
   {
    int n, c, d, a;
	n = 1;
	a = 4;
	c = 1;
    while (c <= 5)
     
   { 
	    d = 1;
    while (d <= a)
   
   {
	    printf("-");
	    d = d + 1;
   }  
     while (d <= 4)
   
   {
	    printf("*");
	    d = d + 1;
   }     
	    c = c + 1;
        a = a - 1;
	    n = n + 1;
	    printf("\n");	
   }	
   }

	
	
	
	
	
	
	
	
	
		
