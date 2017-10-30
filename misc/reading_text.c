#include <stdio.h>

void Usage(char *filename);

int main(int argc, char *argv[]) {
  FILE *fp;
  char buf[20];

	if(argc < 2 || argc > 2) {
    Usage(argv[0]);
    return 0;
  }

  fp =fopen(argv[1],"r");
  if(!fp) {
    return 1;
	}

  while(fgets(buf,20, fp)!=NULL) {
		printf("%s",buf);
	}

	fclose(fp);
  return 0;
}

void Usage(char *filename) {
	printf("Usage: %s [file] \n", filename);
	printf("Prints the content of [file] to stdout\n");
}
