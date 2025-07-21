/*
program 132
11.07.25
Interchange the biggest and smallest of 10 numbers 
in an array
*/
#include <stdio.h>
main()
{
	int a[10], c, b, d, i, n;
	i = 0;
while(i <= 9)
 {
 	scanf("%d", &a[i]);
 	i = i + 1;
  }
  c = 9999;
  d = 0;
  
  i = 0;
  while(i <= 9)
   {
   	
   	if(a[i] > d)
   	 {
   	 	d = a[i];
   	 	n = i;
		}
		if (a[i] < c)
		 {
		 	c = a[i];
		 	b = i;
		 }
		 i = i + 1;
		 
	   }
	   printf("\n");
	   a[n] = c;
	   a[b]	= d;
	   i = 0;
	   while(i <= 9)
	    {
	    	printf("%d", a[i]);
	    	i = i + 1;
	    	printf("\n");
		}
}
