#ifndef car_H
#define car_H
#include "vehicle.h"

class car : public vehicle {
private:
	char* car_name;
public:
	car();
	car(int a, int b);
	car(int a, int b, char* c);
	car(int a, int b, char* c, bool d);

	char* get_car_name();
	const char* get_class_name();

	void set_car_name(char* a);
};
#endif
