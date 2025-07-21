/*
program 57
30.05.25
Check integer number zero or not using implicit check and logical operator
*/
#include<stdio.h>
main()
{
	int a;
	scanf("%d", &a);
if (!a)
    printf("%d is zero", a);
else
    printf("%d is not a zero", a);
}
