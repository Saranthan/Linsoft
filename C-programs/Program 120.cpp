/*
program 120
05.07.25
Read and display the characters other than $
*/
#include <stdio.h>
main()
{
	char c;
	scanf("%c", &c);
while( c != '$')
 {
 	printf("%c", c);
 	scanf("%c", &c);
	 }	
}
