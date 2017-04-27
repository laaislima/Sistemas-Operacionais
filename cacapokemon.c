#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  pid_t pid;
  char *args[2];
  char pokemon=* argv[1];
  pid = fork();
  if(pid==0){
  if(pokemon='p'){
  	args[0]="./pikachu";
  	args[1]= NULL;
	execv("./pikachu", args);

  }   
  }



}
