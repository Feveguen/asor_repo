#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>

int main(){

time_t *t;

printf("El tiempo desde el epoc es: %d\n", time(t));

return 0;
}

//04012022 9:32 am.
//El tiempo desde el epoc es: 164128511
