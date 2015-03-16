#include "RailRoad.h"
#include <vector>
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

RailRoad::RailRoad() {
}

RailRoad::RailRoad(vector<Train> trains) {
	this->trains = trains;
}

void RailRoad::tick() {
	for(int i=0; i < trains.size(); ++i) {
		vector<Route> routes = trains[i].getRoutes();
		trains[i].setCurPos(trains[i].getCurPos() + trains[i].getSpeed());

		int j = -1;
		for(int k = 0; k < routes.size(); ++k) {
			if(routes[k].getFrom() == trains[i].getFrom()) {
				j = k;
			}
		}

		while(trains[i].getCurPos() >= routes[j].getLength()) {
			trains[i].setCurPos(trains[i].getCurPos() - routes[j].getLength());	
			trains[i].setFrom(routes[j].getTo());

			for(int k = 0; k < routes.size(); ++k) {
				if(routes[k].getFrom() == trains[i].getFrom()) {
					j = k;
				}
			}

			trains[i].setTo(routes[j].getTo());
		}
	}
}

bool RailRoad::check() {
	double EPS = 0.001;

	set<int> collisions;
	for(int i = 0; i < trains.size(); ++i) {
		if(trains[i].getCurPos() - EPS <= 0) {
			if(find(collisions.begin(), collisions.end(), trains[i].getFrom()) != collisions.end()) {
				return true;
			}
		}
	}

	return false;
}

string RailRoad::toString() {
	stringstream s;
	
	s << "Railroad:\n";
	for(int i = 0; i < trains.size(); ++i) {
		s << trains[i].toString() << endl;
	}

	return s.str();
}

void RailRoad::print() {
	cout << toString() << endl;
}