#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
gcc -L. -o create_static_lib.sh
