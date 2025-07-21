/*
program 128
07.07.25
Read and display 10 numbers in an narray Find their sum
*/
#include <stdio.h>
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
   
   while(i <=9)
    {
    	d = d + a[i];
    	printf("%d ", a[i]);
    	i = i + 1;
    	printf("\n");
	 }
	 printf("%d", d);
	 
	 	
}
