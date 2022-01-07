#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

if(argc!=1){
printf("Error en el uso de argumentos");
return -1;
}

//Creamos tuberias
int p_h[2];
int h_p[2];
int p=pipe(p_h);
int h=pipe(h_p);

if(p!=0){
perror("Error creando la tuberia padre-hijo\n");
return -1;
}

if(h!=0){
perror("Error creando la tuberia hijo-padre\n");
return -1;
}


//Creamos procesos
pid_t pid=fork();
if(pid==0){ //Proceso hijo

close(p_h[1]);
close(h_p[0]);

char cadena[100];
int i;

for(i=0; i< 10;++i){

read(p_h[0], cadena,100);
printf("Recibido: %s\n",cadena);
sleep(1);

char letra;

if(i == 9){
letra='q';
write(h_p[1], &letra,1);
}

else{
letra='l';
write(h_p[1], &letra,1);
}


}

}
else{ //Proceso padre

close(p_h[0]);
close(h_p[1]);

char res;

do{
char cadena[100];
printf("Introduce una cadena:");
fflush(stdin);
fgets(cadena,100,stdin);
write(p_h[1],cadena,strlen(cadena)+2);
read(h_p[0],&res,1);

} while(res != 'q');


}

return 0;
}
