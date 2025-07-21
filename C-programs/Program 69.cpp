/*
Program 69
01.06.25
Given character is lower case or not using ASCII value
*/
#include<stdio.h>
main()
{
	char c;
	scanf("%c", &c);
if (c >= 97 && c <= 122)
    printf("%c is lower", c);
else
    printf("%c is not lower", c);
}
