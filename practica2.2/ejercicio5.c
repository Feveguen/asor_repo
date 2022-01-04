#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int main(){

int o=open("/home/cursoredes/Downloads/p2/ejercicio5.c", 0645, O_CREAT);

return 0;
}

//[root@localhost p2]# gcc ejercicio5.c -o ejercicio5c
//[root@localhost p2]# ls -l ejercicio5.c
//rw-r--r-x 1 root root 184 Jan  4 12:25 ejercicio5.c
