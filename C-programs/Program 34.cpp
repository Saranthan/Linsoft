/*
program 34
25.5.25
check whethere it is a leap year or not
*/
#include<stdio.h>
main() 
{
  int a;
  scanf("%d", &a);
if (a %4 == 0)  
  printf("%d is a leap year", a);
else
  printf("%d is not a leap year", a);
}
