#include <stdio.h>
#include "include/caculate.h"
int main(void) 
{	
   int x, y;
	 scanf("%d%d",&x,&y);
         printf("%d * %d) = %d\n", x, y, cheng(x, y));
	 printf("tne max is %d\n",max(x,y));
	 return 0;
  }
