#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]){
  
if(argc==1){
printf("Error: Mal uso de los parametros en el ejercicio: %s\n", argv[0]);
return -1;
}

pid_t pid=fork();
if(pid==0){

int res= execvp(argv[0],&(argv[1]));

if(res==-1){
perror("Fallo en el execvp");
return -1;
}



//wait(NULL);
printf("El comando terminó de ejercutarse.\n");
}

return 0;
}

