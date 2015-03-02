#include <vector>
#include "Train.h"

using namespace std;

Train::Train(int id, vector<Route> routes, double v) {
	this->id = id;
	this->routes = routes;
	this->v = v;

	Route route = routes[0];
	int a = route.getFrom();
}