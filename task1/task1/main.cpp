#include "Data.h"
#include "List.h"
#include <iostream>

using namespace std;

int main() {
	List* a = new List();
	Data data1(16, 2, 2015, 9, 43, 0);
	Data data2(16, 2, 2015, 9, 59, 0);
	Data data3(2, 3, 2015, 8, 45, 0);
	Data data4(2, 3, 2015, 2, 45, 0);
	Data data5(2, 3, 2015, 6, 45, 0);

	a->add(data1);
	a->add(data1);
	a->add(data1);
	
	a->add(data2);
	a->add(data2);

	a->add(data3);
	a->add(data4);

	a->add(data5);

	a->print();

	a->remove(data1);
	a->print();

	while(a->remove(data1));
	a->print();
	
	a->removeAt(a->getSize() - 1);
	a->print();
	
	a->clear();
	a->print();

	getchar();
	return 0;
}