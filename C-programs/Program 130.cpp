/*
program 130
10.07.25
Find the index of the biggest in an array of 10 numbers
*/
#include <stdio.h>
main()
{
	int a[10], d, i, n;
	i = 0;
 while(i <= 9)
  {
  	scanf("%d", &a[i]);
  	i = i + 1;
	}
	d = 0;
	i = 0;
	while(i <= 9)
	 {
	  if (a[i] > d)
	   {
	  	 d = a[i];
	  	 n = i;
	  	 
		}
		 i = i + 1;	
	  }
	printf("%d", n);	 	
}
