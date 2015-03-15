#include <vector>
#include "Train.h"

using namespace std;

Train::Train() {
}

Train::Train(int id, vector<Route> routes, double v) {
	this->id = id;
	this->routes = routes;
	this->v = v;

	Route route = routes[0];
	this->curFrom = route.getFrom();
	this->curTo = route.getTo();
	this->curPos = 0;
}

string Train::toString() {
	stringstream s;
	s << "[id = " << id << ", speed = " << v << ", from = " << curFrom << ", to = " << curTo << ", dist = " << curPos << "]";
	return s.str();
}

void Train::print() {
	cout << toString() << endl;
}