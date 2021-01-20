#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
  pid_t x;
  x = fork();
  if (x==0){
    sleep(10);
    printf("this is son\n");
  }else if (x>0){
    wait(0);
    ////-> wait pour synchronisation
        // donne une synchronisation dynamic qui se limit
        // q'au premier processus a se termine
    printf("father closing now");

 }
//return 0;
}

