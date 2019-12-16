#include "array_2d.h"

array_2d::array_2d(){
	for(int i = 0 ; i < this->W ; i++){
		for(int j = 0 ;  j < this->H ; j++){
			this->block_array[i][j] = 0;
		}
	}
	this->score = 0;
}

bool array_2d::can_make(int type){
	
}
