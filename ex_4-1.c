
// programme process1.c
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
  pid_t x;
  x = fork();
  if (x==0){
    sleep(3);
    printf("this is son");
  }else if (x>0){
    sleep(5);
    ////-> utilse sleep pour la synchronisation
        // ne donne pas une une s'incronisation dynamique 
    printf("father closing now");

 }
//return 0;
}

