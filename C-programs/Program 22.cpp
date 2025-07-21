/*
program 22 
19.5.25
Area of cylinder
*/
#include<stdio.h>
main()
{
	int r, h;
	float v;
	scanf("%d", &r);
	scanf("%d", &h);
	v = 3.14 * r * r * h;
	printf("%f", v);
}
