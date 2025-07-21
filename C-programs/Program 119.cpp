/*
program 119
05.07.25
Count the numbers which is positive, negative and zero
*/
#include <stdio.h>
main()
{
	int a, b, c, d;
	scanf("%d", &c);
	a = 0;
	b = 0;
	d = 0;
while(c != 1000)
 {
 	
 if ( c > 0)
    {
	  a = a + 1;
	  
     }
 else
  
 if (c < 0)
    b = b + 1;
 else
    d = d + 1;
	scanf("%d", &c);
		 	 	
  }
  printf("%d", a);
  printf("%d", b);
  printf("%d", d);

}
