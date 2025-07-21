/*
program 144
19.07.25
Read a text character by character
*/
#include <stdio.h>
main()
{
	char a[100];
	int i;
	i = 0;
	scanf("%c", &a[i]);
while(a[i] != '$')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
 }
 a[i] = '\0';
 i = 0;
 while(a[i] != '\0')
  {
  	printf("%c ", a[i]);
  	
  	i = i + 1;
  }
  i = i + 1;
  
}

