/*
program 130
07.07.25
In an array of 10 numbers.
Find their biggest
*/
#include<stdio.h>
main()
{
	int a[10], d, i;
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
	   d = a[i];
	 i = i + 1;
	
	}
	printf("%d", d);   
	  	
}

