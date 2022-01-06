
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){

if(argc!=2){

printf("Error: Mal uso de los parametros en el ejercicio: %d\n", argv[0]);
return -1;

}

pid_t pid=fork();

if(pid==0){

int res= system(argv[1]);

if(res==-1){
perror("Fallo en el system");
return -1;
}

printf("El comando terminó de ejercutarse.\n");

}

return 0;
}
