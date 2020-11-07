CC=gcc
OBJECTS=song.o library.o main.o

all:main

main: $(OBJECTS)
	$(CC) -o main $(OBJECTS)

$(OBJECTS): song.h

library.o: library.c library.h 
main.o: main.c library.h
song.o: song.c song.h

.PHONY: run clean

run:
	./main

clean:
	rm *.o
