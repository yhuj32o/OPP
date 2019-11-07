#ifndef bike_H
#define bike_H
#include "vehicle.h"

class bike : public vehicle {
private:
	char* bike_name;
	int bike_number;
public:
	bike();
	bike(int a, int b);
	bike(int a, int b, char* c);
	bike(int a, int b, char* c, int d);
	bike(int a, int b, char* c, int d, bool e);

	int get_bike_number();
	char* get_bike_name();
	const char* get_class_name();

	void set_bike_name(char* a);
	void set_bike_number(int a);
};
#endif
