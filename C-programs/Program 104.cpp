/*
program 104
27.06.25
Find the sum of the squares of the first 10 numbers
*/
#include<stdio.h>
main()
{
	int a, c;
	a = 0;
	c = 1;
while(c <= 10)
 {
 	a = a + c * c;
 	c = c + 1;
  }
   printf("%d", a);	
}
