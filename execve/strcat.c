#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

int main(int argc, char** argv) {

      char* str1 = "Test";
      char* str2 = "String";
      char* str3 = (char *) malloc(1 +sizeof(char*) * (strlen(str1) + strlen(str2)));
			printf("String1: %s\n", str1);
			printf("String2: %s\n", str2);
			printf("Concatenating String1 and String2 into var [str3]\n");
      strcpy(str3, str1);
      strcat(str3, str2);
      printf("Resulting str3: %s\n", str3);

      return 0;
 }
