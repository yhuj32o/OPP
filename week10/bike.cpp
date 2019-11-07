#include "bike.h"

bike::bike() : vehicle() {
	this->bike_name = nullptr;
	this->bike_number = 0;
}
bike::bike(int a, int b) : vehicle(a, b) {
	this->bike_name = nullptr;
	this->bike_number = 0;
}
bike::bike(int a, int b, char* c) : vehicle(a, b) {
	this->bike_name = c;
	this->bike_number = 0;
}
bike::bike(int a, int b, char* c, int d) : vehicle(a, b) {
	this->bike_name = c;
	this->bike_number = d;
}
bike::bike(int a, int b, char* c, int d, bool e) : vehicle(a, b, e) {
	this->bike_name = c;
	this->bike_number = d;
}

int bike::get_bike_number() {
	return this->bike_number;
}
char* bike::get_bike_name() {
	return this->bike_name;
}
const char* bike::get_class_name() {
	return "bike";
}

void bike::set_bike_name(char* a) {
	this->bike_name = a;
}
void bike::set_bike_number(int a) {
	this->bike_number = a;
}