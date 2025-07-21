/*
program 121
05.07.25
Read and display the characters other than $, 
Display the characters upper, lower, digit, special character
*/
#include <stdio.h>
main()
{
	char c;
	scanf("%d", c);
while(c != '$')
 {
 	
 if ( c >= 65 && c <= 90)
    printf("%c is upper", c);
 else
 
 if (c >= 97 && c <= 122)
    printf("%c is lower", c);
 else
 
 if (c >= 48 && c <= 122)
    printf("%c is digit", c);
 else
    printf("%c is a special character", c);
	scanf("%c", &c);				
	 }	
}
