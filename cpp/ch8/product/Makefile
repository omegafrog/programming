CC = g++
CXXFLAGS = -g -std=c++17
TARGET = main
OBJECTS = main.o product.o book.o compactDisc.o conversationBook.o

all : ${TARGET}

${TARGET} : ${OBJECTS}
	${CC} ${CXXFLAGS} -o $@ $^

%.o : %.cpp
	${CC} ${CXXFLAGS} -c -o $@ $<

clean :
	rm *.o main

.PHONEY : clean
