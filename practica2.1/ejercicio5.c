#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/utsname.h>

int main(){
struct utsname buff;

if(uname(&buff) ==-1){
printf("ERROR: (%d). %s \n", errno, strerror(errno));
return -1;
}

else{

printf("Nombre del sistema operativo: %d\n",buff.sysname);
printf("Nombre del host: %d\n", buff.nodename);
printf("Release del host: %d\n", buff.release);
printf("Version del SO: %d\n", buff.version);
printf("Hardware: %d\n", buff.machine);
}

return 1;
}
