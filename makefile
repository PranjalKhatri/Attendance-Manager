all: main.o school_util.o
	g++ -o main main.o school_util.o
main.o:
	g++ -c main.cpp
rank.o:
	g++ -c school_util.cpp
clear:
	cmd //c del *.o
	cmd //c del *.exe
rebuild:
	make clear
	make
