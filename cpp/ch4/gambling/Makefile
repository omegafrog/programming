CC = g++
CFLAGS = -g -std=c++11
TARGET = main
OBJECTS = main.o gamblingGame.o player.o
SOURCES = main.cpp gamblingGame.cpp player.cpp

all : $(TARGET)

$(TARGET) :$(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o : %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm *.o $(TARGET)
