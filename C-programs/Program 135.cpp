/*
program 135
14.07.25
Read and display a 3x3 matrix
*/
#include<Stdio.h>
main()
{
  int a[3][3], i, j;
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
    	printf("\n");
    while(j <= 2)
	 {
	 	printf("%d ", a[i][j]);
	 	
	 	j = j + 1;
	  }
	  i = i + 1;	
	  }
}
