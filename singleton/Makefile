# Compiler
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Source and Object files
SRCS = main.cpp $(SRC_DIR)/Singleton.h
OBJS = $(OBJ_DIR)/main.o

# Output executable
TARGET = $(BIN_DIR)/main.exe

# Default rule
all: $(TARGET)

# Create binary
$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile main.cpp
$(OBJ_DIR)/main.o: main.cpp $(SRC_DIR)/Singleton.h
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c main.cpp -o $@

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Run the executable
run: all
	./$(TARGET)

.PHONY: all clean run
