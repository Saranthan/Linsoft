/*
program 112
30.06.25
Count the no. of even numbers between two limits
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
  d = d + 1;
  
	c = c + 1;
		
  }	
  printf("%d", d);
  printf("\n");
}
