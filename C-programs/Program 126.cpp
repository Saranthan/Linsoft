/*
program 126
05.07.25
Read and display the biggest and smallest of 10 numbers
*/
#include <stdio.h>
main()
{
	int c, b, d, a;
	a = 999;
	d = 0;
	c = 1;
	while(c <= 10)
	{
 		scanf("%d", &b);
 		if ( b > d)
  			d = b;
 		else
    		if ( b < a)
  				a = b;
 		c = c + 1;
}
	printf("biggest no %d", d);
	printf("\n");
	printf("smallest no %d", a);	
}	

