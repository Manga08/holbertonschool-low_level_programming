#!bin/bash
gcc -c *.c | ar -rc liball.a | ranlib liball.a | ar -t liball.a | nm liball.a
