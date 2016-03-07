CC=gcc
SRC=lecteur.c main.c 
OBJ=$(SRC: .c = .o)
FLAGS=-Wall


index:		$(OBJ) header.h
		$(CC) -o $@ $^

%.o:	%.c
	$(CC) -c $< $(CFLAGS)


clean:
		rm *.o *~ core

