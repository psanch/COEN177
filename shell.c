#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int main(void){

	int status, flag = 0;
	char input[5];

	while (flag == 0){ /* repeat forever */
		printf("Please enter command:\n"); /* display prompt */
		scanf("%c",input); /* input from terminal */ 
		//printf("%s\n",input);
		

		if( strcmp(input,"exit\0") == 0){
			printf("I am exiting!\n");
			flag = 1;
			return 0;
		}

		

		if ( fork() == 0) {/* fork off child process */
		/* C code */
			
			execve (input,NULL,0); /* execute command */
			
		} 
		
		else {
		/* P code */
			
			waitpid( id, &status, 0); /* wait for child to exit */
								 
		}
	}

	return 0;


}






