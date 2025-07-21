/*
program 110
30.06.25
print the numbers 1000 to 2000
check whethere it a leap year or not
*/
#include<stdio.h>
main()
{
	int c;
	c = 1000;
while(c <= 2000)
 {
  if (c % 4 == 0)
   
   	printf("%d is a leap year", c);
   else
     
	printf("%d is not a leap year", c);
	printf("\n");
	c = c + 1;  	
	   	
   }
   	
}
