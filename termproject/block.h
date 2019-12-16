
class block{
	private :
		int color;
		int x,y;
		color_block *group;
	
	private :
		block(int color);
		~block();
		int get_color();
		int get_x();
		int get_y();
		void set_group(color_block *group);
		color_block *get_group();
		void set_location(int x, int y);
		bool can_left();
		bool cna_right();
		bool can_down();
		void rigth();
		void left();
		void down();
		void donw_all();
		bool cna_merge(block *b);
		bool can_explosion(block *b);
		void merge(block *b);
		void find_merge();

}
