#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

void Usage(char *filename);
 
int main(int argc, char *argv[]) {
  FILE *fp;
	
	if(argc < 2 || argc > 2) {
    Usage(argv[0]);
    return(0);
  }
        
	if((fp = fopen(argv[1], "r")) == NULL) {
		Usage(argv[0]);
		return(0);
	}

	int ch = getc(fp);
  while(ch != EOF) {
    putchar(ch); 
    ch = getc(fp);
  }
   
	fclose(fp);
  return 0;
}

void Usage(char *filename) {
	printf("Usage: %s [file] \n", filename);
	printf("Prints the content of [file] to stdout\n");
}
