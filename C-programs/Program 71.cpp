/*
program 71
01.06.25
Given character is upper, lower, digit, or special character
*/
#include<stdio.h>
main()
{
	char a;
	scanf("%c", &a);
if (a >= 65 && a <= 90)
    printf("%c is upper", a);
else
    
if (a >= 97 && a <= 122)
    printf("%c is lower", a);
else

if (a >= 48 && a <= 122)
    printf("%c is digit", a);
else
   printf("%c is a special character", a);
   }
