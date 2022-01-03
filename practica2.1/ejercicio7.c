#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

int main(){
int name;
if(pathconf("/",name) ==-1){
printf("ERROR: (%d). %s \n", errno, strerror(errno));
return -1;
}

else{

printf("Numero maximo de enlaces: %d\n",pathconf("/",_PC_LINK_MAX));
printf("Longitud maxima del nombre de fichero: %d\n",pathconf("/",_PC_NAME_MAX));
printf("Longitud maxima de una ruta relativa: %d\n",pathconf("/",_PC_PATH_MAX));
}

return 1;
}

//Numero maximo de enlaces: 2147483647
//Longitud maxima del nombre de fichero: 255
//Longitud maxima de una ruta relativa: 4096
