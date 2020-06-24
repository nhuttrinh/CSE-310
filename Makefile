
proj1: main.o sub.o
	g++ -o proj1 main.o sub.o

main.o : main.cpp
	g++ -c main.cpp
