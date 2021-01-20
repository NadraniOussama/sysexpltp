#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(){
  execl("/bin/ls","ls",".",NULL);
return 0;
}

