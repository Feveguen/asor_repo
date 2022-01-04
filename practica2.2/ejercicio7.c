#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){

mode_t mask=umask(750);
int o=open("/home/cursoredes/Downloads/p2/ejercicio7.c", 0645);
  
return 0;
}
