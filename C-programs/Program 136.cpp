/*
program 136
17.07.25
Sum of the elements in the matrix
*/
#include<stdio.h>
main()
{
	int a[3][3], i, j, d;
	i = 0;
while(i <= 2)
 {
 	j = 0;
 while(j <= 2)
  {
  	scanf("%d", &a[i][j]);
  	j = j + 1;
   }
   i = i + 1;
    }
	d = 0;
	
	i = 0;
	while(i <= 2)
	 {
	 	j = 0;
	 	printf("\n");
	 while(j <= 2)
	  {
	  	d = d + a[i][j];
	  	j = j + 1;
	   }
	   i = i + 1;	
	  }
	  printf("%d ", d);
		 	
}
