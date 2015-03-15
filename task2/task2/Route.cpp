#include "Route.h"
#include <iostream>
#include <sstream>

using namespace std;

Route::Route() {
}

Route::Route(int from, int to, double length) {
	this->from = from;
	this->to = to;
	this->length = length;
}

int Route::getFrom() {
	return this->from;
}

int Route::getTo() {
	return this->to;
}

double Route::getLength() {
	return this->length;
}

string Route::toString() {
	stringstream s;
	s << "[" << from << " -> " << to << ", " << length << "]";
	return s.str();
}

void Route::print() {
	cout << toString() << endl;
}