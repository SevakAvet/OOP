#include <string>

class RailRoad {
private:
	vector<Route> routes;
public:
	RailRoad();
	RailRoad(vector<Route> routes);
	void add(Route route);
	void tick();
	void check();
	string toString();
	void print();
};