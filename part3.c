#include <unistd.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
/*

if( fork() == 0)
        child
else
        parent

*/
void create3(){

  //printf("\nI am a (soon to be) parent.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );

  if (fork() == 0 ){

    //one child created
    printf("\nI am child 2A.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
    return;

  }

  else{ //parent

            if (fork() == 0 ){

              //two child created
              printf("\nI am child 2B.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
              return;

            }

            else{ //parent

                            if (fork() == 0 ){

                              //three child created
                              printf("\nI am child 2C.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
                              return;

                            }

                            else{

                              return;

                            }



            }

  }
}


void create3twice(){

  //printf("\nI am a (soon to be) parent.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );

  if (fork() == 0 ){

    //one child created
    printf("\nI am child 1A.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
    create3();
    return;

  }

  else{ //parent

            if (fork() == 0 ){

              //two child created
              printf("\nI am child 1B.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
              create3();
              return;

            }

            else{ //parent

                            if (fork() == 0 ){

                              //three child created
                              printf("\nI am child 1C.\nMy Parent's ID is: %d\nMy ID is: %d\n",getppid(),getpid() );
                              create3();
                              return;

                            }

                            else{

                              return;

                            }



            }

  }
}


int main(void){

  printf("\n\nI am the parent(main)! My PID is %d\n\n",getpid());

  create3twice();


}
