#include <stdio.h>

int main() {
	int first, second;

	second = EOF;

	while((first = getchar()) != EOF) {
		// putchar(first);
	
		if(first == ' ')
			if(second != ' ')
				putchar('\n');

		if(second != ' ')
			putchar(first);

		second = first; /* move old char to new char */
	}
}
