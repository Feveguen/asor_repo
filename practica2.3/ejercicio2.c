#include <stdio.h>
#include <string.h>
#include <sched.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

int main(){

pid_t pidactual=getpid();
int sc=sched_getscheduler(pidactual);

if(sc==-1){
printf("Error en el planificador");
return -1;

}


if(sc==SCHED_FIFO){
printf("La planificacion es: FIFO\n");
}

else if(sc==SCHED_OTHER){
printf("La planificacion es: OTHER\n");
}

else if(sc==SCHED_RR){
printf("La planificacion es: RR\n");
}



//consultar prio
printf("La prioridad es: %d\n",getpriority(PRIO_PROCESS,pidactual));


//Valores max y min
printf("La prioridad maxima es: %d\n",sched_get_priority_max(sc));
printf("La prioridad minima es: %d\n",sched_get_priority_min(sc));

return 0;
}
