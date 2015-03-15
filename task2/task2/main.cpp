#include <vector>
#include <iostream>
#include "Train.h"

using namespace std;

int main() {
	vector<Route> routes1;
	Route route;

	route = Route(1, 2, 5.0);
	routes1.push_back(route);

	route = Route(2, 3, 5.0);
	routes1.push_back(route);

	route = Route(3, 1, 5.0);
	routes1.push_back(route);

	Train t;
	t = Train(1, routes1, 2);
		
	//--------------------------------------

	vector<Route> routes2;

	route = Route(3, 4, 5.0);
	routes2.push_back(route);

	route = Route(4, 5, 5.0);
	routes2.push_back(route);

	route = Route(5, 3, 5.0);
	routes2.push_back(route);

	t = Train(2, routes2, 2);

	//--------------------------------------

	vector<Train> trains;
	trains.push_back(train1);
	trains.push_back(train2);

	RailRoad r;
	r = RailRoad();

	return 0;
}