#include <stdio.h>

int main (int argc, char *argv[]) {
   int i;

   printf("The value received by argc is %d.\n", argc);
   printf("There are %d command-line arguments passed to main().\n", argc);

   for (i=0; i<argc; i++)
      printf("argv[%d]: %s\n", i, argv[i]);

   return 0;
}
