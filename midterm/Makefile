.SUFFIXES: .cpp .o

OBJECTS = test.o human.o shared_ref.o smart_obj.o weak_pointer.o student.o

CXX = g++
CPPFLAGS = -c

TARGET = mid

$(TARGET) :$(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)
        
clean : rm -rf $(OBJECTS) $(TARGET)

test.o = test.cpp
human.o = human.cpp
shared_ref.o = shared_ref.cpp
smart_obj.o = smart_obj.cpp
weak_pointer.o = weak_pointer.cpp
student.o = student.cpp


