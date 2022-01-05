[root@localhost p3]# sudo chrt --fifo --pid 12 19765
[root@localhost p3]# gcc ejercicio2.c -o ejercicio2
[root@localhost p3]# ./ejercicio2
El pid es: 20067
El pid padre es: 19765
La planificacion es: FIFO
La prioridad es: 0
La prioridad maxima es: 99
La prioridad minima es: 1
