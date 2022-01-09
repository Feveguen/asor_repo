#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <fcntl.h>


Ejercicio 5. Escribir un programa que espere hasta que haya datos listos para leer en alguna de ellas. El programa debe mostrar la tubería desde la que leyó y los datos leídos. Consideraciones: 

Usar read(2) para leer de la tubería y gestionar adecuadamente la longitud de los datos leídos.

Cuando el escritor termina y cierra la tubería, read(2) devolverá 0, indicando el fin de fichero, por lo que hay que cerrar la tubería y volver a abrirla. Si no, select(2) considerará el descriptor siempre listo para lectura y no se bloqueará.


int main(){

char *tuberia = "tuberia";
char *tuberia2 = "tuberia2";

mkfifo(tuberia,0644);
mkfifo(tuberia2,0644);

char buffer[256];

int pipe1 = open(tuberia, O_RDONLY | O_NONBLOCK);
int pipe2 = open(tuberia2, O_RDONLY | O_NONBLOCK);

//No se continuar

return 0;
}

