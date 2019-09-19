.SUFFIXES: .cpp .o

OBJECTS = assignment1.o assignment2-1.o assignment2-2.o assignment3.o

CXX = g++
CPPFLAGS = -c

TARGET = assignment1 assignment2-1 assignment2-2 assignment3

$(TARGET) :$(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean = rm -rf $(OBJECTS) $(TARGET)

assignment1.o : assignment1.cpp
assignment2-1.o : assignment2-1.cpp
assignment2-2.o : assignment2-2.cpp
assignment3.o : assignment3.cpp
