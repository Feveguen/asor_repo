#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>

int main(){

//Declaramos variable
sigset_t blk_sig;

//Creamos conjunto y añadimos señales
sigemptyset(&blk_sig);
sigaddset(&blk_sig,SIGINT);
sigaddset(&blk_sig,SIGTSTP);

//Bloqueamos las señales del conjunto
sigprocmask(SIG_BLOCK, &blk_sig, NULL);

//A dormir x seg
sleep(6);

//Comprobamos si se recibió
sigset_t pending;
if(sigismember(&pending,SIGINT)==1){
printf("Se recibió SIGINT\n");
  
//Se borra
sigdelset(&blk_sig,SIGINT);
}



//Comprobamos si se recibió
if(sigismember(&pending,SIGTSTP)==1){
printf("Se recibió SIGTSTP\n");

//Se borra
sigdelset(&blk_sig,SIGTSTP);
}

//Desbloqueamos las señales del conjunto
sigprocmask(SIG_UNBLOCK, &blk_sig, NULL);
  
return 0;

}
