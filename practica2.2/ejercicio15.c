#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/file.h>
#include <fcntl.h>
#include <time.h>

int main(int argc, char *argv[]){

if(argc !=2) {
printf("ERROR: Uso erroneo del fichero %s\n",argv[0]);
return -1;
}

int fd =open(argv[1], O_WRONLY | O_CREAT | O_TRUNC,0600);

if(fd==-1){
printf("ERROR: No se puede abrir el fichero");
return -1;
}

int l=lockf(fd,F_LOCK,0);

if(l==-1){
perror("No se pudo bloquear el fichero");
return -1;
}


else{

time_t t=time(NULL);
struct tm tm= *localtime(&t);

printf("Son las: %d:%d:%d\n", tm.tm_hour,tm.tm_min,tm.tm_sec);
sleep(10);
int lo=lockf(fd,F_ULOCK,0);

if(lo==-1){
perror("No se pudo desbloquear el fichero");
return -1;
}

sleep(10);

}

return 0;
}
