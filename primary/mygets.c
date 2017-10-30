#include <stdio.h>

int main() {
  char str[80];
  int i, delt = 'A' - 'a';

	printf("char *gets(char *s);\n");
	printf("int puts(const char *s);\n\n");
  printf("Enter a string less than 80 characters:\n");
  gets(str);
  i = 0;
  while (str[i]) {
    if ((str[i] >= 'A') && (str[i] <= 'Z'))
       str[i] -= delt;  /* convert to upper case */
    ++i;
  }
  printf("The entered string is (in lowercase):\n");
  puts( str );
  return 0;
}
