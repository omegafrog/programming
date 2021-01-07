CC = g++
CXXFLAGS = -g -std=c++11
SRC_DIR = ./src
OBJ_DIR = ./obj

SRCS = $(notdir $(wildcard $(SRC_DIR)/*.cpp))
OBJS = $(SRCS:.cpp=.o)


TARGET = main
OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))
DEPS = $(OBJECTS:.o=.d)

all : ${TARGET}

${OBJECTS}:



$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	${CC} ${CXXFLAGS} -c $< -o $@ 
	
${TARGET} : ${OBJECTS}
	${CC} ${CXXFLAGS} $(OBJECTS) -o $@ 
	
clean : 
	rm ${OBJECTS} ${TARGET}

