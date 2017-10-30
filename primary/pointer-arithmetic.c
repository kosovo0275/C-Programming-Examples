#include <stdio.h>

int main() {
   char *ptr_ch;
   int *ptr_int;
   double *ptr_db;
   /* char pointer ptr_ch */
   printf("Current position of ptr_ch: 0x%p\n", ptr_ch);
   printf("The position after ptr_ch + 1: 0x%p\n", ptr_ch + 1);
   printf("The position after ptr_ch + 2: 0x%p\n", ptr_ch + 2);
   printf("The position after ptr_ch - 1: 0x%p\n", ptr_ch - 1);

   printf("The position after ptr_ch - 2: 0x%p\n", ptr_ch - 2);
   /* int pointer ptr_int */
   printf("Current position of ptr_int: 0x%p\n", ptr_int);
   printf("The position after ptr_int + 1: 0x%p\n", ptr_int + 1);
   printf("The position after ptr_int + 2: 0x%p\n", ptr_int + 2);
   printf("The position after ptr_int - 1: 0x%p\n", ptr_int - 1);
   printf("The position after ptr_int - 2: 0x%p\n", ptr_int - 2);
   /* double pointer ptr_ch */
   printf("Current position of ptr_db: 0x%p\n", ptr_db);
   printf("The position after ptr_db + 1: 0x%p\n", ptr_db + 1);
   printf("The position after ptr_db + 2: 0x%p\n", ptr_db + 2);
   printf("The position after ptr_db - 1: 0x%p\n", ptr_db - 1);
   printf("The position after ptr_db - 2: 0x%p\n", ptr_db - 2);

   return 0;
}
