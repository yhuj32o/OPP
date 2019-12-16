#include <vector>
#include "block.h"
class color_block : public block {
	private :
		set<block *> s;
	
	public :
		color_block(block *b);
		void insert(set<block *> s);
		set<block *> get_set();
		int get_set_size();
		void explosion();
}
