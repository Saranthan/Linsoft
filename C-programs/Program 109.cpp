/*
program 109
29.06.25
Print the numbers from 1 to 100,  check whethere it is even or odd
*/
#include<stdio.h>
main()
{
	int c;
	c = 1;
while(c <= 100)
 {
 
 if (c % 2 == 0)
   {
   	 printf("%d is even", c);
   	 
	}
	else
	 {
	 	printf("%d i odd", c);
	  }
	  printf("\n");
	  c = c + 1;
	
	   	
	 }	
}
