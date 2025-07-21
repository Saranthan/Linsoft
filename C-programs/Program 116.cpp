/*
program 116
03.07.25
Read and Display numbers other than 1000
Find their sum
*/
#include<stdio.h>
main()
{
	int c, d;
	scanf("%d", &c);
	d = 0;
while(c != 1000)
 {
 	d = d + c;
 	scanf("%d", &c);
  }
  printf("%d", d);	
}
