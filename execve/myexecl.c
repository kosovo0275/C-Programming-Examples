#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

#define BUFFER 1024

int main() {
		char line[BUFFER];
		char* path = "/data/data/com.termux/files/usr/bin/";
		char program[50];
		char command[50];

		while(1){
		    printf("$ ");
				if(!fgets(line, BUFFER, stdin))
		        break;
		    memset(command,0,sizeof(command));
		    if(strncmp(line, "exit", (strlen(line)-1))==0)  break;
				strncpy(command,line,(strlen(line)-1));
		    strcpy(program, path);
				strcat(program,command);
		    int pid= fork(); 
				if(pid==0){  
						execl(program,command,NULL);
		        exit(0);
		    }else{
		        wait(NULL);
		    }
		}
}
