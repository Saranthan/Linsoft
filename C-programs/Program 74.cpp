/*
program 74
01.06.25
Flip the alphabets upper case to lower case
*/
#include<stdio.h>
main()
{
	char a, b, c;
	scanf("%c", &a);
if ( a >= 65 && a <= 90)
{
	c = a + 32;
    printf("%c is upper", c);
}	
else

if (a >= 97 && a <= 122)
{
	b = a - 32;
	printf("%c is lower", b);
}
else 
{
	
}

}









