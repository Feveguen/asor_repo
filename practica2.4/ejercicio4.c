#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(int argc, char *argv[]){


if(argc !=2){
printf("Error en el uso de comandos");
return -1;
}


int fd= open("/tuberiaconnombre", O_WRONLY);
write(fd,argv[1],strlen(argv[1]));
close(fd);

return 0;
}
