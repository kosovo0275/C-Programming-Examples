#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

void Usage(char *filename);

int main(int argc, char **argv) {

  if(argc < 3 || argc > 3) {
		Usage(argv[0]);
    return(0);
  }

	else {
		if(access(argv[1],F_OK)<0) {
			printf("%s not found \n ",argv[1]);
		}

		if(rename(argv[1],argv[2])==0) {
			printf(" %s is movied or renamed to %s \n successfully\n",argv[1],argv[2]);
		}

		return (0);
	}
}

void Usage(char *filename) {
        printf("Usage: %s <path-to-source> <path-to-dest>\n", filename);
}
