#include "Data.h"
#include "List.h"
#include <assert.h> 
#include <iostream>
#include <sstream>

List::List() {
	size = 0;
	capacity = 1 << 4;
	a = new Data[capacity];
}

void List::clear() {
	size = 0;
	capacity = 1 << 4;
	a = new Data[capacity];
}

void List::resize() {
	const int newSize = capacity * 2;
	capacity = newSize;
	Data* a = new Data[newSize];

	for (int i = 0; i < size; ++i) {
		a[i] = this->a[i];
	}

	this->a = a;
}

int List::getSize() {
	return size;
}

bool List::isEmpty() {
	return size == 0;
}

void List::add(Data x) {
	if (size + 1 > capacity) {
		resize();
	}

	a[size++] = x;
}

Data List::get(int pos) {
	assert(pos >= 0 && pos < size);
	return a[pos];
}

void List::removeAt(int pos) {
	assert(pos >= 0 && pos < size);

	for (int i = pos; i < size; ++i) {
		a[i] = a[i + 1];
	}

	--size;
}

bool List::remove(Data x) {
	for (int i = 0; i <= size; ++i) {
		if (a[i] == x) {
			removeAt(i);
			return true;
		}
	}
	return false;
}

string List::toString() {
	std::stringstream s;
	s << "[";
	for (int i = 0; i < size - 1; ++i) {
		s << a[i].toString() << endl;
	}

	if (size - 1 >= 0) {
		s << a[size - 1].toString();
	}

	s << "]" << endl;
	return s.str();
}

void List::print() {
	cout << toString() << endl;
}