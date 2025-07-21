/*
program 99
22.06.25
print the pattern
*/
#include<stdio.h>
main()
{
	int n, c, d;
	n = 1;
	c = 1;
while(c <= 6)
 {
 	d = 1;
 while(d <= n)
  {

  if(n % 2 == 0)
   {
   	printf("-");
	d = d + 1; 
   	}
	else
	{
		printf("*");
		d = d + 1;
		
	 }
	 
	  }
	  
	  n = n + 1;
	  printf("\n");
	  c = c + 1;
	 }
	 	
}
