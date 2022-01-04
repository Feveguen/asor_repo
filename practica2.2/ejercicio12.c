#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

if(argc != 2){
printf("Error. Uso: %s fichero\n",argv[0]);
return -1;
}

int fd =open(argv[1], O_WRONLY | O_CREAT | O_TRUNC,0600);

if(fd==-1){
printf("Error: No se puede acceder al fichero\n");
return -1;
}

int res = dup2(fd,1); //seria equivalente a 1.

if(res==-1){
printf("Error: No se pudo redireccionar el fichero\n");
return -1;
}

close(fd);

printf("Hola que tal\n");
printf("Estamos haciendo la practica\n");
printf("Adios\n");

return 0;

}
