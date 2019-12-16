.SUFFIXES : .cpp .o
OBJECTS = block.o color_block.o big_block.o cross_block.o fold_block.o tree_block.o array_2d.o
CXX = g++
CPPFLAGS = -c

TARGET = main

$(TARGET) : $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS)

clean :
	rm -rf $(OBJECTS) $(TARGET)

block.o : block.cpp
color_block.o : color_block.cpp
big_block.o : big_block.cpp
cross_block.o : cross_block.cpp
fold_block.o : fold_block.cpp
tree_block.o : tree_block.cpp
color_block.o : color_block.cpp
