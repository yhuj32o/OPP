#include <block.h>

class big_block : public block{
	private :
		vector<block *> v;
		int min_x, min_y, max_x, max_y;
	
	public :
		~big_block();
		void rotate();
		bool can_left();
		bool can_right();
		bool cna_down();
		void left();
		void right();
		bool down();
		bool down_all();
		bool move(int input);
}
