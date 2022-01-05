#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <stdlib.h>
int main(){

pid_t pidh=getpid();
pid_t pidp=getppid();
pid_t pidg=getpgid(pidh);
pid_t pids=getsid(pidh);

char buf[60];
char *c=getcwd(buf, 60);

printf("El PID es: %d\n", pidh);
printf("El PPID es: %d\n", pidp);
printf("El GPID es: %d\n", pidg);
printf("El SID es: %d\n", pids);
printf("La ruta es: %d\n", c);

return 0;
}
