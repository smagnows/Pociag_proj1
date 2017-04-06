CC = g++ -Wall -std=c++11 -g

all: main.o pociag.o pasazer.o basic.o
	$(CC) main.o basic.o pociag.o pasazer.o -o jestemPolakiem

main.o: main.cpp 
	$(CC) main.cpp -c -o main.o

basic.o: basic.cpp basic.h
	$(CC) basic.cpp -c -o basic.o

pociag.o: pociag.cpp pociag.h
	$(CC) pociag.cpp -c -o pociag.o

pasazer.o: pasazer.cpp pasazer.h
	$(CC) pasazer.cpp -c -o pasazer.o

clean:
	rm -f *.o jestemPolakiem

