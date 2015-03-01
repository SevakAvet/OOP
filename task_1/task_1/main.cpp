#include "Data.h"
#include "List.h"
#include <iostream>

using namespace std;

int main() {
	List* a = new List();
	Data data1(16, 2, 2015, 9, 43, 0);
	Data data2(16, 2, 2015, 9, 59, 0);

	a->add(data1);
	a->add(data2);

	a->print();

	getchar();
	return 0;
}