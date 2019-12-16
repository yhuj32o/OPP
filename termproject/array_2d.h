#include "block.h"
#include "color_block.h"

class array_2d {
     private :
	int W = 5; int H = 12;
	block *block_array[W][H];
	set<color_block *> explosion_s;
	array_2d();
	bool can_make(int type);
	void delete_block(int x, int y);
	void insert(vector<block *> v);
	void insert(int x, int y, block * b);
	block *get_block(int x, int y);
	bool can_move(int x, int y);
	void print();
	void insert_explosion(color_block *group);
	void remove_explosion(color_block *group);
	bool can_explosion();
	void explosion();
	int get_score();
}
