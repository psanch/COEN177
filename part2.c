#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>


void create8(int count){

	printf("\nI am a child.\nCount is:%d\nMy Parent's ID is: %d\nMy ID is: %d\n",count,getppid(),getpid() );

	if (fork() == 0 ){

		if (count == 8){	
			return;
		}

		create8(++count);
	}

	else return;
}
/*

if( fork() == 0)
	child
else
	parent

*/

int main(void){

	int counter = 0;
	pid_t parentID = getpid();

	printf("\n\nI am the parent(main)! My PPID is %d\n\n",parentID);

	create8(++counter);


}






