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

vector<Route> Train::getRoutes() {
	return this->routes;
}

int Train::getFrom() {
	return this->curFrom;
}

int Train::getTo() {
	return this->curTo;
}

double Train::getCurPos() {
	return this->curPos;
}

double Train::getSpeed() {
	return this->v;
}

void Train::setFrom(int from) {
	this->curFrom = from;
}

void Train::setTo(int to) {
	this->curTo = to;
}

void Train::setCurPos(double pos) {
	this->curPos = pos;
}

void Train::setSpeed(double v) {
	this->v = v;
}

string Train::toString() {
	stringstream s;
	s << "[id = " << id << ", speed = " << v << ", from = " << curFrom << ", to = " << curTo << ", dist = " << curPos << "]";
	return s.str();
}

void Train::print() {
	cout << toString() << endl;
}