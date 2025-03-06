# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Source and Object files
SRCS = main.cpp \
       $(SRC_DIR)/Shape.h \
       $(SRC_DIR)/Circle.h \
       $(SRC_DIR)/Rectangle.h \
       $(SRC_DIR)/Square.h\
       $(SRC_DIR)/ShapeFactory.h \

OBJS = $(SRCS:.cpp=.o)
OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Output executable
TARGET = $(BIN_DIR)/shapes.exe

# Default rule
all: $(TARGET)

# Create binary
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile source files
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Run the executable
run: all
	./$(TARGET)

.PHONY: all clean run
