CC = g++
CFLAGS = -g -std=c++17
TARGET = main
OBJECTS = main.o sortedArray.o

all : ${TARGET}

${TARGET} : ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $>

%.o : %.cpp
	${CC} ${CFLAGS} -c -o $@ $>

clean :
	rm *.o main
	