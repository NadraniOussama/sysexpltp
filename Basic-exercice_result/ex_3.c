#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
 // pid_t x;
  pid_t cpid; 
  int status;
 // x=fork();
  int i= 0;
//  if(x==0)
  do{
    if( cpid!=0){
//      printf("test ?? %d // i?? %d\n\n",cpid,i);
      printf("===>this process %d is ending after  it son %d cpid\n\n",getpid(),cpid);
      waitpid(cpid,&status,0);
      return 1;
    }else{
      printf("==>SON \nthis is son num  %d, with process number %d \n\n",i,getpid());
      cpid=fork();  
      i++;

    }

  }while(i < 5);
return 0;
//  printf("==>hey welcome to this world \n",);
}

