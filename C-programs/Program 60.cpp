/*
program 60
30.05.35
Given integer number is leap year or not using implicit check and logical operator
*/
#include<stdio.h>
main()
 {
 	int a, d1;
 	scanf("%d", &a);
 	d1 = a % 4;
if (!d1)
    printf("%d is a leap year", a);
else 
    printf("%d is not a leap year", a);
}
