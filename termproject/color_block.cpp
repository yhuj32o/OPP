#include "color_block.h"

color_block::color_block(block *b){
	this->s = b;
}

void color_block::insert(set<block *> s){
}

set<block *> color_block::get_set(){
	return this->s;
}

int color_block::get_set_size(){
}

void color_block::explosion(){
}
