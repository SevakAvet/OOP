#include "Data.h"
#include <string>

using namespace std;

class List {
private:
	int size = 0;
	int capacity = 1 << 4;
	Data* a;
	void resize();
public:
	List();
	void add(Data x);
	Data get(int pos);
	bool remove(Data x);
	void removeAt(int pos);
	int getSize();
	bool isEmpty();
	string toString();
	void print();
};