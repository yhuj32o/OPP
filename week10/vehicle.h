#ifndef vehicle_H
#define vehicle_H
class vehicle {
private:
	bool has_name;
	int wheel_number;
	int max_speed;
public :
	vehicle();
	vehicle(int a, int b);
	vehicle(int a, int b, bool c);

	int get_wheel_number();
	int get_max_speed();
	bool get_has_name();
	const char* get_class_name();

	void set_wheel_number(int a);
	void set_max_speed(int a);
	void set_has_name(bool a);
};
#endif