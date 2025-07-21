/*
program 27
22.5.25
check whethere the number is positive,negative or not
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
if (a > 0)
    printf("%d is positive", a);
else
if (a < 0)
   printf("%d is negative", a);
else
   printf("%d is zero", a);   		
}
