/*
program 140;
19.07.25
Read and display a word
*/
#include <stdio.h>
main()
{
	char a[100];
	int i;
	i = 0;
	scanf("%c", &a[i]);
while(a[i] != ' ')
 {
 	i = i + 1;
 	scanf("%c", &a[i]);
  }
  a[i] = '\0';
  printf("%s", a);	
}
