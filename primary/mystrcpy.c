#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "This is Exercise 1.";
	char str2[20];

	printf("str1 is \"%s\"\n", str1);
	printf("str2 is initialized empty\n\n");

	printf("processing strcpy\n\n");
	strcpy(str2, str1);

	printf("str2 is now \"%s\"\n", str2);
	return 0;
}
