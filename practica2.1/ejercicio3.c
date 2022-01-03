#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

const int MAX_ERRORS=255;

int main (){
char *s;
int i;
for(i=0; i < MAX_ERRORS;i++){
printf("ERROR(%d): %s. \n", i,strerror(i));
  
  //Va a haber 133 errores segun la compilación
}

return 1;
}
