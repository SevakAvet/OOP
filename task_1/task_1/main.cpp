#include "Data.h"
#include <iostream>

using namespace std;

int main() {
	Data* data1 = new Data(16, 2, 2015, 9, 43, 0);
	Data* data2 = new Data(16, 2, 2015, 9, 60, 0);

	cout << data1->toString() << endl;
	cout << data2->toString() << endl;

	getchar();
	return 0;
}