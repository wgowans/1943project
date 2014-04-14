all: main

main: main.o Counter.o
	g++ main.o Counter.o -o main -lSDL -lSDL_image -lSDL_ttf

main.o: main.cpp
	g++ -c main.cpp

Counter.o: Counter.cpp
	g++ -c Counter.cpp

clean:
	rm -f *.o main
