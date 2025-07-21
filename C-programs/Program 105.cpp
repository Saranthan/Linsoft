/*
program 105
27.06.25
Factorial of n
*/
#include<stdio.h>
main()
{
	int a, c;
	a = 1;
	c = 1;
while(c <= 10)
 {
 	a = a * c;
 	c = c + 1;
  }
  printf("%d", a);	
}
