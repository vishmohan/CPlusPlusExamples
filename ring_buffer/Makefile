CC=g++
CCFLAGS=-std=c++2a -Wall -Wextra -pedantic-errors
TARGET=a.out
SOURCE=ring_buffer.cpp
OBJECT=$(SOURCE:.cpp=.o)

default: $(TARGET)

$(TARGET): $(OBJECT)
	$(CC) $< -o $@

%.o:%.cpp
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECT)
