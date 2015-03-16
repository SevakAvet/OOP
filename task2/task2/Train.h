#include <string>
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
	Train();
	Train(int id, vector<Route> routes, double v);
	
	vector<Route> getRoutes();
	int getFrom();
	int getTo();
	double getCurPos();
	double getSpeed();

	void setFrom(int from);
	void setTo(int to);
	void setCurPos(double pos);
	void setSpeed(double v);

	string toString();
	void print();
};