#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(){
int name;
if(sysconf(name) ==-1){
printf("ERROR: (%d). %s \n", errno, strerror(errno));
return -1;
}

else{

printf("Longitud maxima de argumentos: %d\n",sysconf(_SC_ARG_MAX));
printf("Numero maximo de ficheros abiertos por proceso: %d\n",sysconf(_SC_OPEN_MAX));
printf("Numero maximo de hijos: %d\n",sysconf(_SC_CHILD_MAX));
}

return 1;
}

//Longitud maxima de argumentos: 2097152
//Numero maximo ficheros abiertos por proceso: 1024
//Numero maximo hijos: 3836
