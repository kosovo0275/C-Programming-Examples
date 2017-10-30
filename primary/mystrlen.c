#include <stdio.h>
#include <string.h>

int main() {
  char str[80];
	int i;

	printf("Manually calculate length of input string.\n\n");
  printf("Enter a string less than 80 characters:\n");
  gets(str);

  for(i=0; str[i]; i++) {; }
	printf("\n");
	
	printf("The strlen of [input] is %d\n", i);
}

