[cursoredes@localhost p2]$ touch archivo10
[cursoredes@localhost p2]$ mkdir dir10
[cursoredes@localhost p2]$ ln -s archivo10 archivosejemplo10
[cursoredes@localhost p2]$ ln -s dir10 direjemplo10

[cursoredes@localhost p2]$ ls -l
total 72
-----w-rw- 1 cursoredes cursoredes    0 Jan  4 12:30 1
-----w-rw- 1 cursoredes cursoredes    0 Jan  4 13:47 archivo10
lrwxrwxrwx 1 cursoredes cursoredes    9 Jan  4 13:47 archivosejemplo10 -> archivo10
drw-rw-rw- 2 root       root          6 Jan  4 12:10 dir
d----w-rwx 2 cursoredes cursoredes    6 Jan  4 13:47 dir10
lrwxrwxrwx 1 cursoredes cursoredes    5 Jan  4 13:48 direjemplo10 -> dir10
drw-rw-rw- 2 root       root          6 Jan  4 12:08 ej4
drw-rw-rw- 2 cursoredes cursoredes    6 Jan  4 12:11 ejer4
-r-xr----- 1 root       root       1050 Jan  4 11:58 ejercicio1.c
-rw-r--r-- 1 root       root        207 Jan  4 12:01 ejercicio2.c
-rw-r--r-- 1 root       root        114 Jan  4 12:07 ejercicio3.c
-rwxr-xr-x 1 root       root       8448 Jan  4 12:21 ejercicio5
-rwxr-xr-x 1 root       root       8448 Jan  4 12:25 ejercicio5c
-rw-r--r-- 1 root       root        184 Jan  4 12:25 ejercicio5.c
-rwxr-xr-x 1 root       root       8496 Jan  4 12:34 ejercicio7
-rw-r--r-- 1 root       root        200 Jan  4 12:34 ejercicio7.c
-rwxr-xr-x 1 root       root       8672 Jan  4 13:44 ejercicio9
-rw-r--r-- 1 root       root        505 Jan  4 13:45 ejercicio9.c
d----w-rwx 2 cursoredes cursoredes    6 Jan  4 12:30 fic

[cursoredes@localhost p2]$ ls -i
34138721 1                  17301011 ejer4         33654088 ejercicio7
34138726 archivo10          34138715 ejercicio1.c  34138724 ejercicio7.c
34138723 archivosejemplo10  34138716 ejercicio2.c  34138717 ejercicio9
  460960 dir                34138719 ejercicio3.c  34138728 ejercicio9.c
51385378 dir10              33974368 ejercicio5    33807464 fic
34138727 direjemplo10       33974372 ejercicio5c
50520302 ej4                34138722 ejercicio5.c
[cursoredes@localhost p2]$ 
