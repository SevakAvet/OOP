#include <string>
using namespace std;

#pragma once
enum FieldType {DAY, MONTH, YEAR, HOUR, MINUTE, SECOND};

class Data {
private :
	int day;
	int month;
	int year;
	int hour;
	int minute;
	int second;

public:
	Data();
	Data(int day, int month, int year, int hour, int minute, int second);
	int get(FieldType f);
	void set(FieldType f, int value);
	string toString();
	bool operator ==(Data a);
};