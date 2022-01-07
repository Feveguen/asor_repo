#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int cont_sigint=0;
int cont_sigtstp=0;

void handler(int signal){

if(signal==SIGINT)
cont_sigint++;

if(signal==SIGTSTP)
cont_sigtstp++;
}


int main(int argc, char *argv[]){

if(argc !=1){
printf("Error en el ejercicio: %d\n",argv[0]);
return -1;
}

struct sigaction sa;
 
//SIGINT
sigaction(SIGINT,NULL,&sa);
sa.sa_handler= handler;
sigaction(SIGINT,&sa,NULL);

//SIGTSTP
sigaction(SIGTSTP,NULL,&sa);
sa.sa_handler= handler;
sigaction(SIGTSTP,&sa,NULL);

sigset_t set;
sigemptyset(&set);

while(cont_sigint + cont_sigtstp < 10){
sigsuspend(&set);
}

printf("\n");
printf("La señal SIGINT ha aparecido %d veces\n", cont_sigint);
printf("La señal SIGTSTP ha aparecido %d veces\n", cont_sigtstp);

return 0;
}
