/*
program 145
20.07.25
Read a text and count the no.of vowels and non vowels of a string
*/
#include<stdio.h>
main()
{
	char a[100];
	int c, b, i;
	i = 0;
	scanf("%c", &a[i]);
while( a[i] != '$')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
  }
  a[i] = '\0';
  b = 0;
  c = 0;
  i = 0;
  while(a[i] != '\0')
   {
   	
   	if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
   	   
   	   b = b + 1;
   	else
	    
	   c = c + 1;
	   i = i + 1;
	}
	printf("%d", b);
	printf("\n");
	printf("%d", c);
		
}
