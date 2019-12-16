#include <block.h>

block::block(int color){
	this->color = color;	
}
block::~block(){
}
int block::get_color(){
	return this->color;
}

int block::get_x(){
	return this->x;
}

int block::get_y(){
	return this->y;
}

color_block *get_group(){
	return this->group;
}

void set_group(color_block *group){
	this->group = group;
}


