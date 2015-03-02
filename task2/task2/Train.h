#include <vector>
#include "Route.h"

using namespace std;

class Train {
private:
	int id;
	vector<Route> routes;
	double v;

	int curFrom;
	int curTo;
	double curPos;
public:
	Train(int id, vector<Route> routes, double v);
};