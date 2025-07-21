/*
program 148
21.07.25
Count the words, lines, charcters
*/
#include<stdio.h>
main()
{
	char a[100];
	int b, c, d, i;
	i = 0;
	scanf("%c", &a[i]);
while(a[i] != '$')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
  }
  a[i] = '\0';
  b = 0;
  c = 0;
  d = 0;
  i = 0;
  while(a[i] != '\0')
   {
   	
	if(a[i] != ' ' && a[i+1] == ' ' || a[i] != '\n' && a[i+1] == '\n' || a[i] != '\t' && a[i+i] == '\t')
	  
	   b = b + 1;
	else
	
	if (a[i] == '\n')
	  c = c + 1;
	else
	 d = d + 1;
	 i = i + 1;          
	   }
	   printf("%d", b);
	   printf("\n");
	   printf("%d", c);
	   printf("\n");
	   printf("%d", i);	
}
