#include <stdio.h>
#include <ctype.h>

#define BUFFSIZE 1024
 
int main(int argc, char **argv) {
	int c, i=0, isempty=1;
  char buffer[BUFFSIZE]={0};
	FILE *fp, *tempfile;
  
	fp = fopen(argv[1], "r");
  tempfile = fopen("temp.txt", "w");
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
