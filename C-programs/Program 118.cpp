/*
program 118
05.07.25
Read and display the numbers other than 1000. 
check whethere it is positive , negative or not
*/
#include <stdio.h>
main()
{
	int c, d;
	scanf("%d", &c);
	d = 0;
while( c != 1000)
 {
 	
 if (c > 0)
    printf("%d is positive", c);
 else
 
 if ( c < 0) 
    printf("%d is negative", c);
 else
    printf("%d is zero", c);
	
	scanf("%d", &c);		
  }
  printf("%d", c);	
}
