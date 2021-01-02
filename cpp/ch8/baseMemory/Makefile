CC = g++
CXXFLAGS = -g -std=c++17
TARGET = main
OBJECTS = main.o ram.o rom.o

all : ${TARGET}

${TARGET} : ${OBJECTS}
	${CC} ${CXXFLAGS} -o $@ $^

$.o : %.cpp
	${CC} ${CXXFLA} -c -o $@ $<

clean :
	rm *.o main
