/*
program 113
30.06.25
find the sum of odd no. between two limits
*/
#include<stdio.h>
main()
{
	int c, b, d;
	scanf("%d %d", &c, &b);
	d = 0;
while(c <= b)
 {
 
 if (c % 2 == 0)
  
  	printf("%d is not an odd number", c);
  	
  	else
  	  d = d + c;
  	  c = c + 1;
  	  printf("\n");
   }
   printf("%d", d);	
	
}
