/*
program 106
28.06.25
Fibonacci series of n terms
*/
#include<stdio.h>
main() 
{
	int f, c, s, n;
	f = 0;
	s = 1;
	
while(c <= n)
 {
 	n = f + s;
 	printf("%d", n);
	f = s;
 	s = n;
 	printf("\n");
 	}	
  c = c + 1;

}


