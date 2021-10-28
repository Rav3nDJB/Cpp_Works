#include <sstream>
#include "Person.h"

string Person::toString() {
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << "; Age is: " << age << endl;
//	ss << "; memory location of object: " << this << endl;

	return ss.str();
}