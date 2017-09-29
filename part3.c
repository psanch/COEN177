#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>

void create(int count){

	printf("\nI am a child.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );

	if (count == 2) //MAKE 2
	{

		if (fork() == 0 ) //child B
		{

		

		
		}

		else //parent A
		{

	

		}
		
	}

	else if(count == 3) //MAKE 3
	{

	

	}
}

/*

if (fork() == 0 ) //child
	{

		

		
	}

	else //parent
	{

	

	}
*/

int main(void){



}






