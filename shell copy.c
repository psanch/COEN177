#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int main(void){

	int status, flag = 0;
	char input[30];

	while (flag ==0){ /* repeat forever */
		printf("Please enter command:\n"); /* display prompt */
		scanf("%c",input); /* input from terminal */ 
		printf("%c",input);
		

		if( strcmp(input,"exit\0") == 0){
			printf("I am exiting!\n");
			flag = 1;
			break;
		}

		pid_t id = fork();

		if ( flag == 0 && id != 0) {/* fork off child process */
		/* Parent code */
			printf("I am a parent this is my ID: %d\n", getppid());
			waitpid( id, &status, 0); /* wait for child to exit */
			printf("I have just finished waiting for my child.\n");
		} 
		
		else if (flag == 0 && id == 0) {
		/* Child code */
			printf("I am a child this is my ID: %d\n", getpid());
			execve (input,NULL,0); /* execute command */

			break;						 
		}
	}

	return 0;


}






