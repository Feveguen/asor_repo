[root@localhost p3]# ps -u
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root      1360  0.5  4.8 406080 49664 tty1     Ssl+ Jan04   6:11 /usr/bin
root     17966  0.0  0.3 220616  4056 pts/1    S    10:57   0:00 sudo su
root     17967  0.0  0.2 193816  2396 pts/1    S    10:57   0:00 su
root     17970  0.0  0.3 116604  3316 pts/1    S    10:57   0:00 bash
root     18322  0.0  0.3 220616  4052 pts/0    S    11:05   0:00 sudo su
root     18323  0.0  0.2 193816  2396 pts/0    S    11:05   0:00 su
root     18326  0.0  0.3 116604  3312 pts/0    S    11:05   0:00 bash
root     19584  0.0  0.3 218524  4012 pts/0    S    12:22   0:00 sudo su
root     19585  0.0  0.2 193816  2404 pts/0    S    12:22   0:00 su
root     19588  0.0  0.3 116604  3304 pts/0    S    12:22   0:00 bash
root     19761  0.0  0.3 218524  4008 pts/0    S    12:28   0:00 sudo su
root     19762  0.0  0.2 193816  2400 pts/0    S    12:28   0:00 su
root     19765  0.0  0.3 116736  3520 pts/0    S    12:28   0:00 bash
root     20179  0.0  0.2 119804  2480 pts/1    S+   12:48   0:00 man ps
root     20190  0.0  0.0 110304   948 pts/1    S+   12:48   0:00 less -s
root     20449  0.0  0.1 155324  1872 pts/0    R+   13:08   0:00 ps -u

Apartado B)
[root@localhost p3]# ps -eo "%p %G %a”
