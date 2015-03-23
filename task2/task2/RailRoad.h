#include <string>
#include <vector>
#include <set>
#include "Train.h"

class RailRoad {
private:
	vector<Train> trains;
public:
	RailRoad();
	RailRoad(vector<Train> trains);
	void tick();
	bool check();
	string toString();
	void print();
};