#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>

int main(){

time_t ti=time(NULL);
struct tm *t=localtime(&ti);

printf("Estamos en el año: %d\n", 1900 + t->tm_year);

return 0;
}
