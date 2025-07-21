/*
program 125
05.07.25
Read and display Biggest of 10 numbers
*/
#include <stdio.h>
main()
{
	int c, b, d;
	d = 0;
	c = 1;
while(c <= 10)
  {
	scanf("%d", &b);
   if (b > 0)
    d = b;
   else
     printf("%d is not bigger", b);
	 
	 c = c + 1;		
	}
	printf("%d", b);	
}
