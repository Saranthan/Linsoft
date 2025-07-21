/*
program 46
29.5.25
Smalllest among three digits from the given expression
*/
#include<stdio.h>
main() 

{
	int a, d1, d2, d3, d4;
	scanf("%d", &a);
	d1 = a % 10;
    d2 = a / 10;
    d3 = d2 % 10;
    d4 = d2 / 10;
if (d1 < d3)    
    
if (d1 < d4)
    printf("%d is smaller", d1);
else
    printf("%d is smaller", d4);
else

if (d3 < d4)     
	printf("%d is smaller", d3);
else 
    printf("%d is smaller", d4);
}

