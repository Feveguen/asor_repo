NAME
       ls - list directory contents

SYNOPSIS
       ls [OPTION]... [FILE]...

DESCRIPTION
       List  information  about  the  FILEs  (the  current directory by
       default).  Sort entries alphabetically if none of -cftuvSUX  nor
       --sort is specified.

Mandatory  arguments  to  long  options  are mandatory for short
       options too.

       -a, --all
              do not ignore entries starting with .

	--color[=WHEN]
              colorize the output; WHEN  can  be  'never',  'auto',  or
              'always' (the default); more info below

       -d, --directory
              list directories themselves, not their contents

	-F, --classify
              append indicator (one of */=>@|) to entries
	
	-h, --human-readable
              with  -l,  print sizes in human readable format (e.g., 1K
              234M 2G)

       -i, --inode
              print the index number of each file
	
	-l     use a long listing format

	-R, --recursive
              list subdirectories recursively

	-1     list one file per line
