CC=g++
CCFLAGS='-std=c++2a -Wall -Wextra -pedantic-errors'
TARGET=a.out
SOURCE=vault.cpp
OBJECTS=$(SOURCE:.cpp=.o)

default: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $< -o $@

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJECTS)
