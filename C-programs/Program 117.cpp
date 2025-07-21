/*
	program 117
	03.07.25
	Read and Display the numbers other than 1000
	Find their biggest number
*/
#include <stdio.h>
main()
{
	int c, d;
	scanf("%d", &c);
	d = 0;
	while(c != 1000)
 	{	if ( c > d)
			d = c;
	 	scanf("%d", &c);  
	}
	printf("%d", d);	
}

