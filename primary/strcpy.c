#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Copy a string.";
  char str2[15];
  char str3[15];
  int  i;

  printf("char *strcpy(char *dest, const char *src);\n\n");
  printf("The content of str1: \"%s\"\n", str1);
  printf("The content of str2: \n");
  printf("The content of str3: \n\n");
  printf("Processing strcpy\n\n");
  /* with strcpy() */
  strcpy(str2, str1);
  /* without strcpy() */
  for (i=0; str1[i]; i++)
    str3[i] = str1[i];
  str3[i] = '\0';
  /* display str2 and str3 */
  printf("The new content of str1: \"%s\"\n", str1);
  printf("The new content of str2: \"%s\"\n", str2);
  printf("The new content of str3: \"%s\"\n", str3);
  return 0;
}
