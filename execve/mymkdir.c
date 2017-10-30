#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

void Usage(char *filename);

int main(int argc, char *argv[]) {

    if(argc < 2 || argc > 2) {
            Usage(argv[0]);
            return(0);
    }
		mkdir(argv[1], 0755);
		return 0;
}

void Usage(char *filename) {
        printf("Usage: %s <path-to-dir>\n", filename);
}
