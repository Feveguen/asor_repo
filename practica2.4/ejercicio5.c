#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/select.h>
#include <sys/stat.h>
#include <fcntl.h>

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

