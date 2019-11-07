.SUFFIXES: .cpp .o

OBJECTS = main.o vehicle.o bike.o car.o

CXX = g++
CPPFLAGS = -c

TARGET = test

$(TARGET) :$(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)
        
clean : rm -rf $(OBJECTS) $(TARGET)

main.o : main.cpp
vehicle.o : vehicle.cpp
bike.o : bike.cpp
car.o : car.cpp

