#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main(){

printf("El UID real es: %d\n", getuid());
printf("El UID efectivo es: %d\n", geteuid());

struct passwd *pw;

printf("Nombre de usuario: %d\n",pw->pw_name);
printf("Directorio home: %d\n",pw->pw_dir);
printf("Descripcion del usuario: %d\n",pw->pw_gecos);

return 1;

}
