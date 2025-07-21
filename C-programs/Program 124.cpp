/*
program 124
05.07.25
Read and display the sum of 10 numbers
*/
#include <stdio.h>
main()
{
	int c , d, b;
	d = 0;
	c = 1;
while(c <= 10)
 {
   scanf("%d", &b);
   d = d + c;
   c = c + 1;
  }
  printf("%d", d);	
}
