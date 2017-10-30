#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void Usage(char *filename);

int main(int argc, char *argv[]) {
	
    if(argc < 3 || argc > 3) {
            Usage(argv[0]);
            return(0);
    }

		char *prog = { argv[1] };
		char* path;
    char *newargv[] = { NULL, argv[2], NULL };
    char *newenviron[] = { "ANDROID_ROOT=/system", "ANDROID_DATA=/data", "PATH=/data/data/com.termux/files/usr/bin:/data/data/com.termux/files/usr/bin/applets", "LD_LIBRARY_PATH=/data/data/com.termux/files/usr/lib" };
		
		path = "/data/data/com.termux/files/usr/bin/";
    char * program = (char *) malloc(1 +sizeof(char*) * (strlen(path) + strlen(prog)));
    strcpy(program, path);
    strcat(program, prog);
		
    newargv[0] = program;

    execve(program, newargv, newenviron);
    perror("execve");   /* execve() returns only on error */
    exit(EXIT_FAILURE);
}

void Usage(char *filename) {
        printf("Usage: %s <prog-to-exec> <args>\n", filename);
}
