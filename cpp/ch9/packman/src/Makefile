CC = g++
CXXFLAGS = -g -std=c++17
TARGET = main
OBJECTS = main.o move.o game.o

all : ${TARGET}

${TARGET} : ${OBJECTS}
	${CC} ${CXXFLAGS} -o $@ $^

%.o : %.cpp
	${CC} ${CXXFLAGS} -c -o $@ $<

clean :
	rm *.o main

