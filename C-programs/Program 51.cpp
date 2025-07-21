/*
program 51
30.05.25
Check whether the given character is vowel or not
*/
#include<stdio.h>
main() 
{
	char a;
	scanf("%c", &a);
if (a == 'a' ||  a == 'e' || a == 'i' || a == 'o' || a == 'u')	
    printf("%c is a vowel", a);
else 
    printf("%c is not a vowel", a);
}
