/*
program 147
21.07.25
count the no.of words
*/
#include<stdio.h>
main()
{
	char a[100];
	int i, b;
	i = 0;
	scanf("%c", &a[i]);
while(a[i] != '$')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
  }
  a[i] = '\0';
  b = 0;
  i = 0;
  while(a[i] != '\0')
   {
   	
   	if(a[i] != ' ' && a[i+1] == ' ' || a[i] != '\n' && a[i+1] == '\n' || a[i] != '\t' && a[i+i] == '\t')
	   b = b + 1;
	   i = i + 1;
	}
	printf("%d", b);	
}
