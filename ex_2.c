#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
  pid_t x;
  int variable=20;
  x = fork();
  if (x==0){
    variable+= 10; // this is the son 
  }else if (x > 0){
    variable+= 100; // this is the father 
  } else {
    printf("there was an error while creating the process  %d \n",variable) ;
  }
 printf("result in the end of the current process %d \n",variable) ;
}
