#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

if(argc!=5){
printf("Error en el usos de argumentos");
return -1;
}

//Creamos tuberia
int tuberia[2];
int p = pipe(tuberia);

if(p !=0){
perror("Error creando la tuberia");
return -1;
}

//Creamos procesos
pid_t pid=fork();

if(pid==0){ //Proceso hijo
close(tuberia[1]);
int d2 =dup2(tuberia[0],0);
execvp(argv[3], &(argv[3]));

}

else{ //Proceso padre

close(tuberia[0]);
int d2 =dup2(tuberia[1],1);
execlp(argv[1],argv[1],argv[2], NULL);
}

return 0;
}
