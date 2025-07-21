/*
program 134
14.07.25
Interchange the second biggest and second smallest numbeers in an array
*/
#include<stdio.h>
main()
{
	int a[10], b, f, c, d, i, n, e;
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
	 i = 0;
	 while(i <= 9)
	  {
	  	
	  if (a[i] != d)
	  
	  if (a[i] > c)
	  {
	  
	  
	   c = a[i];
	   f = i;
       }
	   
	   
	   i = i + 1;	
	  }
	  e = 9999;
	  i = 0;
	  while(i <= 9)
	   {
	   	
	   	if (a[i] < e)
	   	 e = a[i];
	   	 i = i + 1;
	   }
	   e = 9999;
	   i = 0;
	   while(i <= 9)
	    {
	     if (a[i] != e)
	      
	     if (a[i] < b)
		  
		  	b = a[i];
		  	n = i;
		    
		   i = i + 1;
		}
		a[n] = c;
		a[f] = b;
		
		i = 0;
		printf("\n");
		while(i <= 9)
		 {
		 	printf("%d", a[i]);
		 	i = i + 1;
		 	printf("\n");
		 }
			
}
