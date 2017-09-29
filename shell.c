#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

int main(void){

	int status;
	char input[30];
	char exit[30] = "exit\0";
	pid_t id;

	while (1){ /* repeat forever */
		printf("Please enter command:\n"); /* display prompt */
		scanf("%s",input); /* input from terminal */ 
		

		if( strcmp(input,exit) == 0){
			printf("I am exiting!\n");
			
			return 0;
		}
		

	        if ( fork() == 0) {
		// C code 
			
			execve(input,NULL,0);
			break; 
			
		} 
		
		else {
		// P code 
			
			waitpid( -1, &status, 0); 
								 
		}
	
	}

	return 0;


}






