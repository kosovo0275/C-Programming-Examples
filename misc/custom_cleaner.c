#include <stdio.h>
#include <stdlib.h>

#define BUFFSIZE 1024

void rcomment(int c);
void Usage(char *filename);
char buffer[BUFFSIZE]={0};
int d,c,i=0,isempty=1;
FILE *fp, *tempfile;

int main(int argc, char *argv[]) {
	if(argc < 2 || argc > 2) {
    Usage(argv[0]);
    return -1;
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
    buffer[i++]=c; 
		if(c!=' ' && c!='\n' && c!='\t') {   
      isempty=0;
		}
		else {
      if(c=='\n' && isempty==1) {
        buffer[i]='\0';
        i=0;
        isempty=1;
			}
			else if(c=='\n' && isempty==0) {
				buffer[i]='\0';
				fprintf(tempfile,"%s",buffer);
				i=0;
				isempty=1;
			}
		}
	}
	if(!isempty) {
    buffer[i]='\0';
    fprintf(tempfile,"%s",buffer);
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
  printf("Usage: %s [FILE]\n", filename);
  printf("\nRemoves all user comments and erroneous blank lines found in [FILE]\n");
}
