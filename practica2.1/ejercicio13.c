#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int main(){

struct timeval tv;

int ini = gettimeofday(&tv,NULL);
int start = tv.tv_usec;
int i;
  
for(i =0; i < 1000000; i++){
}

int fin=gettimeofday(&tv,NULL);
int end = tv.tv_usec;

printf("El tiempo que tarda es: %d\n", end-start);

return 0;
}


//El tiempo que tarda es: 4594
