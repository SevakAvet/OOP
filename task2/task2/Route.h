class Route {
private:
	int from;
	int to;
	double length;
public:
	Route(int from, int to, double length);
	int getFrom();
	int getTo();
	double getLength();
};