KILL(1)                      User Commands                      KILL(1)

NAME
       kill - terminate a process

SYNOPSIS
       kill [-s signal|-p] [-q sigval] [-a] [--] pid...
       kill -l [signal]

DESCRIPTION
       The  command  kill  sends  the specified signal to the specified
       process or process group.  If no signal is specified,  the  TERM
       signal  is  sent.   The TERM signal will kill processes which do
       not catch this signal.  For other processes, it may be necessary
       to use the KILL (9) signal, since this signal cannot be caught.

       Most  modern  shells  have a builtin kill function, with a usage
       rather similar to that of the command described here.  The  '-a'
       and  '-p'  options,  and the possibility to specify processes by
       command name are a local extension.

       If sig is 0, then no signal is sent, but error checking is still
       performed.

OPTIONS
       pid... Specify  the  list  of processes that kill should signal.
              Each pid can be one of five things:

              n      where n is larger than 0.  The process with pid  n
                     will be signaled. When an argument of
                     the  form '-n' is given, and it is meant to denote
                     a process group, either the signal must be  speci‐
                     fied  first, or the argument must be preceded by a
                     '--' option, otherwise it will  be  taken  as  the
                     signal to send.

              commandname
                     All processes invoked using that name will be sig‐
                     naled.

       -s, --signal signal
              Specify the signal to send.  The signal may be given as a
              signal name or number.

       -l, --list [signal]
              Print  a list of signal names, or convert signal given as
              argument to a name.   The  signals  are  found  in  /usr/
              include/linux/signal.h

       -L, --table
              Similar to -l, but will print signal names and their cor‐
              responding numbers.

       -a, --all
              Do not restrict the commandname-to-pid conversion to pro‐
              cesses with the same uid as the present process.
                
      -p, --pid
              Specify  that kill should only print the process id (pid)
              of the named processes, and not send any signals.

       -q, --queue sigval
              Use sigqueue(2) rather than kill(2) and the sigval  argu‐
              ment  is  used  to specify an integer to be sent with the
              signal.  If the receiving process has installed a handler
              for  this  signal  using  the  SA_SIGINFO  flag to sigac‐
              tion(2), then it can obtain this data  via  the  si_value
              field of the siginfo_t structure.

