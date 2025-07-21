/*
program 101
23.06.25
Print the pattern
*/
#include<stdio.h>
main() 
{
  int n, c, d1, d2, a;
  n = 1;
  a = 3;
 d1 = 1;
 while(d1 <= 4)
  {
  	c = 1;
  while(c <= a)
   {
   	printf(" ");
   	c = c + 1;
	   }
	   d2 = 1;
	   while(d2 <= n)
	    {
	    	c = 1;
	    if(d2 % 2 == 0)
		 {
		 	printf("-");
		 	d2 = d2 + 1;
			 }
			 else
			  {
			  	printf("*");
			  	d2 = d2 + 1;
			  	}
				  c = c + 1;	
			}
			a = a - 1;
			d1 = d1 + 1;
			n = n + 2;
			printf("\n");
		}
  }
