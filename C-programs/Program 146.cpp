/*
program 146
20.07.25
Read a string, count the no.of upper, lower, digit or special character
*/
#include<stdio.h>
main()
{
	char a[100];
	int c, b, d, f, i;
	i = 0;
	scanf("%c", &a[i]);
while(a[i] != '$')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
  }
  b = 0;
  c = 0;
  d = 0;
  f = 0;
  i = 0;
  while(a[i] != '\0')	
  {
  	
  if (a[i] >= 65 && a[i] <= 90)
     b = b + 1;
	 
  else
  
  if (a[i] >= 97 && a[i] <= 122)
     c = c + 1;
  else
  
  if (a[i] >= 48 && a[i] <= 122)
     d = d + 1;
  else
     f = f + 1;
	 i = i + 1;	 	 	 	
  }
  printf("%d", b);
  printf("\n");
  printf("%d", c);
   printf("\n");
  printf("%d", d);
   printf("\n");
  printf("%d", f);
  
}
