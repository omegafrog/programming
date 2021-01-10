CC = g++
CXXFLAGS = -g -std=c++11

SRC_DIR = ./src
OBJ_DIR = ./obj

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)

TARGET = main
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CC) $(CXXFLAGS) $(OBJECTS) -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

clean :
	rm $(OBJECTS) $(TARGET)
