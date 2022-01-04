
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

struct stat buf;
int s= stat("/", &buf);

printf("El minor es: %d\n", minor(buf.st_dev));
printf("El major es: %d\n", major(buf.st_dev));
printf("El tipo  es: %d\n",buf.st_mode);
printf("El inodo es: %d\n",buf.st_ino);
printf("La hora  es: %d\n",buf.st_ctime);

return 0;
}



//El minor es: 0
//El major es: 253
//El tipo  es: 16749
//El inodo es: 64
//La hora  es: 1535980582
