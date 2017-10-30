#include <stdio.h>

int main() {
   int i = 32;   /* block scope 1*/

   printf("Within the outer block: i=%d\n", i);
   {    /* the beginning of the inner block */
       int i, j;    /* block scope 2, int i hides the outer int i*/
       printf("Within the inner block:\n");
       for(i=0, j=10; i<=10; i++, j--)
           printf("i=%2d, j=%2d\n", i, j);
   }   /* the end of the inner block */
   printf("Within the outer block:  i=%d\n", i);
	 return 0;
}
