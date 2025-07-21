/*
program 138
17.07.25
sum of the matrices
*/
#include<stdio.h>
main()
{
	int a[3][3], b[3][3], d[3][3], i, j;
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
  i = 0;
  while(i <= 2)
   {
   	j = 0;
    while(j <= 2)
	 {
	 	scanf("%d", &b[i][j]);
	 	j = j + 1;
	  }
	  i = i + 1;	
    }

	
	i = 0;
	while(i <= 2)
	 {
	 	j = 0;
	 while(j <= 2)
	  {
	 	d[i][j] = a[i][j] + b[i][j];
		j = j + 1; 
	   } 
	 i = i + 1;
      }
      i = 0;
      while(i <= 2)
       {
       	j = 0;
       	printf("\n");
       while(j <= 2)
		  {
		  	printf("%d ", d[i][j]);
		  	j = j + 1;
		  }
		  i = i + 1;
		 }	
}


