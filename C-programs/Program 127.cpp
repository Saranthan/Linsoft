/*
program 127
07.07.25
Read and display 10 numbers in an array
*/
#include <stdio.h>
main()
{
	int a [10], i;
	i = 0;
while( i <= 9)
 {
 	scanf("%d", &a[i]);
 	i = i + 1;
  }
  printf("\n");
  i = 0;
  while( i <= 9)
   {
   	printf("%d ", a [i]);
   	i = i + 1;
   	
   	}
   	
}
