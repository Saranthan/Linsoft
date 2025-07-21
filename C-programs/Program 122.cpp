/*
program 122
05.07.25
read and display the characters other than $, 
count the upper, lower, digit , special charcter
*/
#include <stdio.h>
main()
{
	char a, b, d, s, c;
	a = 0;
	b = 0;
	d = 0;
	s = 0;
while(c != '$')	
 {
 	
 if (c >= 65 && c <= 90)
  
  	a = a + 1;
 else
 
 if (c >= 97 && c <= 122)
   b = b + 1;
 else
 
 if (c >= 48 && c <= 122)
  d = d + 1;
 else
  s = s + 1;
  scanf("%c", &c);        	
 }
 printf("%d", a);
 printf("%d", b);
 printf("%d", d);
 printf("%d", s);

}
