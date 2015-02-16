#include "Data.h"
#include <iostream>

using namespace std;

int main() {
	Data* data = new Data(2015, 2, 16, 9, 43, 0);
	cout << data->toString();

	getchar();
	return 0;
}