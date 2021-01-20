#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
  pid_t x;
  x = fork();
  int  status;
  if (x==0){
    printf("this is son\n");
    sleep(10);// to simulate a workload 
  }else if (x>0){
    waitpid(x,&status,0);
    ////-> wait pour synchronisation
        // donne une synchronisation dynamic qui se limit
        // q'au premier processus a se termine
    printf("father closing now");

 }
return 0;
}

