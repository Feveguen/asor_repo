#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/sysmacros.h>

int main(int argc, char *argv[]){

if(argc !=2){
printf("ERRRO: Se debe especificar la ruta del archivo");
return -1;
}

struct stat buf;

int statint=stat(argv[1],&buf);

if(statint==-1){
printf("ERROR: No existe el directorio");
return -1;
}

mode_t mode=buf.st_mode;

if (S_ISREG(mode)) {

printf("%s es un archivo ordinario.\n", argv[1]);

char* hard = malloc(sizeof(char)*(5 + strlen(argv[1])));
char* sym = malloc(sizeof(char)*(5 + strlen(argv[1])));

strcpy(hard, argv[1]);
strcpy(sym, argv[1]);

hard = strcat(hard, ".hard");
sym = strcat(sym, ".sym");
printf("HARD: %s\n", hard);
printf("SYM: %s\n", sym);

}
return 0;

}
