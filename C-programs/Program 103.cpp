/*
program 103
27.06.25
Find the sum of first 100 numbers
*/
#include<stdio.h>
main()
{
	int a, c;
	a = 0;
	c = 1;
while(c <= 100)
 {
 	a = a + c;
 	c = c + 1;
  }
  printf("%d", a);	
}
