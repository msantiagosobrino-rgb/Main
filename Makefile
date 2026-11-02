CXX = g++
CXXFLAGS = -Wall -std=c++17

TARGET = bin/main
SOURCE = src/main.cpp

all:
	mkdir -p bin
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
