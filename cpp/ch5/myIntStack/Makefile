CC=g++
CFLAGS=-g -std=c++11
TARGET=main
OBJECTS=main.o myIntStack.o
SOURCES = main.cpp myIntStack.cpp

all : $(TARGET)

$(TARGET) :$(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm *.o $(TARGET)
