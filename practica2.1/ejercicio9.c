#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

printf("El UID real es: %d\n", getuid());
printf("El UID efectivo es: %d\n", geteuid());

return 1;

}


//Cuando el EUID del proceso se cambia al usuario del fichero
