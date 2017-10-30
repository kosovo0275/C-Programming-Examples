#include <stdio.h>
#include <stdlib.h>

void usage(char *filename);

int main(int argc, char *argv[]) {
	FILE *fp;
	char temp_str[50];
	char *program=(char *) malloc(1+sizeof(char*) * (strlen(temp_str)));

	if(argc<2 || argc>2) {
    usage(argv[0]);
    return 0;
  }

	fp=fopen(argv[1],"r");
	
  while(fgets(temp_str, 50, fp)!=NULL) {
    strcpy(program, temp_str);
		printf("%s", program);
	}
	
	fclose(fp);
	return 0;
}

void usage(char *filename) {
  printf("Usage: %s [FILE]\n", filename);
  printf("Opens, reads, and prints [FILE] to stdout.\n");
}
