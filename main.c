#include <stdio.h>
#include "include/calculator.h"
int main(void) 
{	
   int x, y;
	 scanf("%d%d",&x,&y);
         printf("%d * %d) = %d\n", x, y, cheng(5, 6));
	 printf("tne max is %d\n",max(5,6));
	 return 0;
  }
