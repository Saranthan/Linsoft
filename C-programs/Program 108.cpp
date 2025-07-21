/*
program 108
28.06.25
Multplication tables of 2 from 2 to 12
*/
#include<stdio.h>
main()
{
	int c, b, d;
	c = 2;
while(c <= 12)
 {
 	b = 1;
 while(b <= 12)
  {
  	d = c * b;
  	printf("%d * %d = %d", c, b, d);
  	b = b + 1;
  	printf("\n");
	  }	
	  c = c + 1;
	  printf("\n");
	 }	
	 
}
