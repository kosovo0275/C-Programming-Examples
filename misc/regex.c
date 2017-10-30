#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <regex.h>

#define tofind argv[2]

void Usage(char *filename);

int main(int argc, char **argv) {
    FILE *fp;
    char line[1024];
		int number = 0;
    int retval = 0;
    regex_t re;
    regmatch_t rm[2];
    const char *filename = argv[1];

		if(argc < 3 || argc > 3) {
			  Usage(argv[0]);
				return(0);
		}

    if (regcomp(&re, tofind, REG_EXTENDED) != 0) {
        fprintf(stderr, "Failed to compile regex '%s'\n", tofind);
        return EXIT_FAILURE;
    }

    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "Failed to open file %s (%d: %s)\n", filename, errno, strerror(errno));
        return EXIT_FAILURE;
    }

    while((fgets(line, 1024, fp)) != NULL) {
				number++;
        line[strlen(line)-1] = '\0';
        if ((retval = regexec(&re, line, 2, rm, 0)) == 0) {
            printf("\n");
            printf("Text: %.*s\n", (int)(rm[0].rm_eo - rm[0].rm_so), line + rm[0].rm_so);
            printf("line #%d\n", number);
            char *src = line + rm[1].rm_so;
            char *end = line + rm[1].rm_eo;
            while (src < end) {
                size_t len = strcspn(src, " ");
                if (src + len > end)
                    len = end - src;
                src += len;
                src += strspn(src, " ");
            }
        }
    }
    return EXIT_SUCCESS;
}

void Usage(char *filename) {
		printf("Usage: %s [file] [string] \n", filename);
		printf("Searches [file] for any instance of [string] and print to stdout\n");
}
