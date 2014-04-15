all: main

main: main.o Counter.o Player.o GraphElement.o
	g++ main.o Counter.o GraphElement.o Player.o -o main -lSDL -lSDL_image -lSDL_ttf

GraphElement.o:
	g++ -c GraphElement.cpp

Player.o:
	g++ -c Player.cpp

main.o: main.cpp
	g++ -c main.cpp

Counter.o: Counter.cpp
	g++ -c Counter.cpp

clean:
	rm -f *.o main
