/*
program 114
30.06.25
count the no.of leap years between two limits
*/
#include<stdio.h>
main()
{
	int c, b, d;
	scanf("%d %d", &c, &b);
	d = 0;
while(c <= b)
 {
 if (c % 4 == 0)
  
  	d = d + 1;
 else
  printf("%d is not a leap year", c);
  c = c + 1; 	
  printf("\n");	   	
	 }
	 printf("%d", d);
}
