#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <locale.h>

int main(){

time_t ti=time(NULL);
struct tm *t=localtime(&ti);
setlocale(LC_ALL, "");

char fecha[1000];

strftime(fecha, 1000, "%A ," " %d de " " %B de " "%Y ," "%H:%M", t);
printf("Hoy es: %f\n", fecha);

return 0;

}
