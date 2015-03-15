#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Route {
private:
	int from;
	int to;
	double length;
public:
	Route();
	Route(int from, int to, double length);
	int getFrom();
	int getTo();
	double getLength();
	string toString();
	void print();
};