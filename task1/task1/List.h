#include "Data.h"
#include <string>

using namespace std;

class List {
private:
	int size;
	int capacity;
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
	void clear();
};