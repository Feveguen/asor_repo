#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <sys/type.h>
#include <unistd.h>

int main (){
char *e;
int res= setuid(0);
if(res== -1){
perror(e);
}

return 1;
}
