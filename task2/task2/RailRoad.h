#include <string>
#include "Route.h"
#include "Train.h"

class RailRoad {
private:
	vector<Train> trains;
public:
	RailRoad();
	RailRoad(vector<Train> routes);
	void add(Route route);
	void tick();
	void check();
	string toString();
	void print();
};