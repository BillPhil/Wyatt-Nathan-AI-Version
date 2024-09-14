# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11

# Target executable
TARGET = line_program

# Source files
SRCS = LineTest_AI.cpp Point.cpp Line.cpp

# Object files
OBJS = LineTest_AI.o Point.o Line.o

# Default target
all: $(TARGET)

# Rule to link object files and create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile LineTest.cpp into LineTest.o
LineTest_AI.o: LineTest_AI.cpp  Line.h
	$(CXX) $(CXXFLAGS) -c LineTest_AI.cpp

# Rule to compile Point.cpp into Point.o
Point.o: Point.cpp Line.h
	$(CXX) $(CXXFLAGS) -c Point.cpp

# Rule to compile Line.cpp into Line.o
Line.o: Line.cpp Line.h
	$(CXX) $(CXXFLAGS) -c Line.cpp

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets (targets that aren't actual files)
.PHONY: all clean
