/*
program 68
01.06.25
Given character is upper or not using ASCII value
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%c", &c);
if (c >= 65 && c <= 90)
    printf("%c is upper", c);
else
    printf("%c is not upper", c);
}
