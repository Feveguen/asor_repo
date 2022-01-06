#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <stdlib.h>

int main(){

pid_t p_hijo=fork();

if(p_hijo==0){ //Hijo

setsid();
int dir=chdir("/tmp");

printf("El PID es: %d\n", getpid());
printf("El PPID es: %d\n", getppid());
printf("El GPID es: %d\n", getpgrp());
printf("El SID es: %d\n", getsid(getpid()));
printf("La ruta es: %d\n", dir);

}

pause();

return 0;
}
