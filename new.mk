a.out: new.o server.o
    gcc new.o server.o 
server.o: server.c new.h
    gcc -c server.c
new.o: new.c new.h
    gcc -c new.c
