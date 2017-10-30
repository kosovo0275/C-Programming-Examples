#include <stdio.h>

/* function declaration */
int StrPrint(char *str);

/* main() function */
int main() {
   char str[24] = "Pointing to a function.";
   int (*ptr)(char *str);

   ptr = StrPrint;
   if (!(*ptr)(str))
      printf("Done!\n");

   return 0;
}

/* function definition */
int StrPrint(char *str) {
   printf("%s\n", str);
   return 0;
}
