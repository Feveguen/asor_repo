NAME
       id - print real and effective user and group IDs

SYNOPSIS
       id [OPTION]... [USER]

DESCRIPTION
       Print  user  and  group  information  for the specified USER, or
       (when USER omitted) for the current user.

       -a     ignore, for compatibility with other versions

       -Z, --context
              print only the security context of the current user

       -g, --group
              print only the effective group ID

       -G, --groups
              print all group IDs

       -n, --name
              print a name instead of a number, for -ugG

       -r, --real
              print the real ID instead of the effective ID, with -ugG

       -u, --user
              print only the effective user ID
              
       -z, --zero
              delimit entries with NUL characters, not whitespace;

              not permitted in default format

       --help display this help and exit

       --version
              output version information and exit
