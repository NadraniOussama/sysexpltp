// programme process1.c
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
  pid_t x;
  x = fork();
  if (x==0){
    printf("this is the son with pid %d \n",getpid());

  }else if (x>0){
    printf("this is the father with pid  %d  \n",getpid());
  }
  //wait();
  printf("finished task of process with pid num : %d \n",getpid());
return 0;
}

