#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int main (){

char *s;
int res= setuid(0);
if(res== -1){
printf("ERROR(%d): %s.", errno,strerror(errno));
}

return 1;
}
