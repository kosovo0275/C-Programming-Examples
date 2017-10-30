#include <stdio.h>
#include <stdlib.h>

void rcomment(int c);
void Usage(char *filename);
FILE *fp, *tempfile;
int c, d;

int main(int argc, char *argv[]) {
  if(argc < 2 || argc > 2) {
    Usage(argv[0]);
    return 0;
  }
  fp = fopen(argv[1], "r");
	if(fp == NULL) {
		perror(argv[1]);
		exit(EXIT_FAILURE);
	}
	tempfile = fopen("temp.txt", "w");
  if(tempfile == NULL) {
		perror("temp.txt");
		exit(EXIT_FAILURE);
	}
	while((c=getc(fp))!=EOF) {
		rcomment(c);
  }

	fclose(fp);
	fclose(tempfile);
	remove(argv[1]);
  rename("temp.txt", argv[1]);
  return 0;
}

void rcomment(int c) {
  if(c == '/') {
		if((d=getc(fp))=='*') {
      c = getc(fp);
      d = getc(fp);
			while(c!='*' || d!='/') {
			  c = d;
				d = getc(fp);
			}
		}
		else if(d == '/') {
      c = getc(fp);
		  while(c!='\n') {
			  c = getc(fp);
			}
      putc(c, tempfile);
		}
		else {
			putc(c, tempfile);
      putc(d, tempfile);
    }
  }
	else
    putc(c, tempfile);
}

void Usage(char *filename) {
  printf("Usage: %s [file]\n", filename);
  printf("Removes all comments found in [file]\n");
}
