CC = gcc
CFLAGS = -g -Wall -lm
BIN = datos

$(BIN): datos.o
	$(CC) -o $@ $^ $(CFLAGS)
clean:
	rm -fr datos.o datos *~
