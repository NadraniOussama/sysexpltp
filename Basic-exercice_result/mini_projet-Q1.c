#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#define TAILLE_MESSAGE 256
int main()
{
  pid_t pid_fils;
  int descripteurTube[2];
  char messageLire[TAILLE_MESSAGE];
  char messageEcrire[TAILLE_MESSAGE];
  pipe(descripteurTube);
  pid_fils = fork();

  if(pid_fils==-1) return 1;

  if(pid_fils == 0){
    close(descripteurTube[1]);
    read(descripteurTube[0],messageLire,TAILLE_MESSAGE);
    printf("Message recu = \"%s\"",messageLire);
  }else if(pid_fils > 0){

    close(descripteurTube[0]);
    sprintf(messageEcrire,"this is the father");
    write(descripteurTube[1],messageEcrire,TAILLE_MESSAGE);

  }
  wait(NULL);
  return 0;
}
