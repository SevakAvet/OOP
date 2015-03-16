#include <vector>
#include <iostream>
#include "RailRoad.h"

using namespace std;

void nonCollisionCase() {
	vector<Route> routes1;
	Route route;

	route = Route(1, 2, 5.0);
	routes1.push_back(route);

	route = Route(2, 3, 5.0);
	routes1.push_back(route);

	route = Route(3, 1, 5.0);
	routes1.push_back(route);

	Train train1;
	train1 = Train(1, routes1, 1);

	//--------------------------------------

	vector<Route> routes2;

	route = Route(3, 4, 5.0);
	routes2.push_back(route);

	route = Route(4, 5, 5.0);
	routes2.push_back(route);

	route = Route(5, 3, 5.0);
	routes2.push_back(route);

	Train train2;
	train2 = Train(2, routes2, 2);

	//--------------------------------------

	vector<Train> trains;
	trains.push_back(train1);
	trains.push_back(train2);

	RailRoad r;
	r = RailRoad(trains);

	do {
		r.print();
		r.tick();
		if(r.check()) {
			cout << "COLLISION!!!" << endl;
		}
	} while(getchar() != '!');
}

void collisionCase() {
vector<Route> routes1;
	Route route;

	route = Route(1, 2, 5.0);
	routes1.push_back(route);

	route = Route(2, 3, 5.0);
	routes1.push_back(route);

	route = Route(3, 1, 5.0);
	routes1.push_back(route);

	Train train1;
	train1 = Train(1, routes1, 1);

	//--------------------------------------

	vector<Route> routes2;

	route = Route(1, 4, 5.0);
	routes2.push_back(route);

	route = Route(4, 5, 5.0);
	routes2.push_back(route);

	route = Route(5, 1, 5.0);
	routes2.push_back(route);

	Train train2;
	train2 = Train(2, routes2, 1);

	//--------------------------------------

	vector<Train> trains;
	trains.push_back(train1);
	trains.push_back(train2);

	RailRoad r;
	r = RailRoad(trains);

	do {
		r.print();
		r.tick();
		if(r.check()) {
			cout << "COLLISION!!!" << endl;
		}
	} while(getchar() != '!');
}

int main() {
	//nonCollisionCase();
	collisionCase();
	return 0;
}