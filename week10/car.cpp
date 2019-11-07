#include "car.h"

car::car() : vehicle() {
	this->set_car_name(nullptr);
}
car::car(int a, int b) : vehicle(a, b) {
	this->set_car_name(nullptr);
}
car::car(int a, int b, char* c) : vehicle(a, b) {
	this->set_car_name(c);
}
car::car(int a, int b, char* c, bool d) : vehicle(a, b, d) {
	this->set_car_name(c);
}

char* car::get_car_name() {
	return this->car_name;
}
const char* car::get_class_name() {
	return "car";
}

void car::set_car_name(char* a) {
	this->car_name = a;
}
