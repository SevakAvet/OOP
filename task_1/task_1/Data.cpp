#define _CRT_SECURE_NO_WARNINGS
#include "Data.h"
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

bool checkDay(Data* data, int day) {
	int month = data->get(MONTH);

	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if (day >= 1 && day <= 31) {
			return true;
		}
	case 2:
		int year;
		year = data->get(YEAR);
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			if (day >= 1 && day <= 29) {
				return true;
			}
		}
		else {
			if (day >= 1 && day <= 28) {
				return true;
			}
		}
	case 4:
	case 6:
	case 9:
	case 11:
		if (day >= 1 && day <= 30) {
			return true;
		}
	}

	return false;
}

Data::Data(int day, int month, int year, int hour, int minute, int second) {
	if (year < 0) {
		cerr << "Invalid year (year = " << year << ")" << endl;
		//exit(1);
	}

	this->year = year;

	if (month < 1 || month > 12) {
		cerr << "Invalid month (month = " << month << ")" << endl;
		//exit(1);
	}

	this->month = month;

	if (!checkDay(this, day)) {
		cerr << "Invalid day (day = " << day << ")" << endl;
		//exit(1);
	}

	this->day = day;
		
	if (hour < 0 || hour > 23) {
		cerr << "Invalid hour (hour = " << hour << ")" << endl;
		//exit(1);
	}

	this->hour = hour;

	if (minute < 0 || minute > 59) {
		cerr << "Invalid minute (minute = " << minute << ")" << endl;
		//exit(1);
	}

	this->minute = minute;

	if (second < 0 || second > 59) {
		cerr << "Invalid second (second = " << second << ")" << endl;
		//exit(1);
	}

	this->second = second;
}

int Data::get(FieldType type) {
	switch (type) {
	case DAY:
		return this->day;
	case MONTH:
		return this->month;
	case YEAR:
		return this->year;
	case HOUR:
		return this->hour;
	case MINUTE:
		return this->minute;
	default:
		return this->second;
	}
}

void Data::set(FieldType type, int value) {
	switch (type) {
	case DAY:
		if (!checkDay(this, value)) {
			cerr << "Invalid day (day = " << value << ")" << endl;
			return;
		}

		this->day = value;
		break;
	case MONTH:
		if (value < 1 || value > 12) {
			cerr << "Invalid month (month = " << value << ")" << endl;
			return;
		}

		this->month = value;
		break;
	case YEAR:
		if (value < 0) {
			cerr << "Invalid year (year = " << value << ")" << endl;
			return;
		}

		this->year = value;
		break;
	case HOUR:
		if (value < 0 || value > 23) {
			cerr << "Invalid hour (hour = " << value << ")" << endl;
			return;
		}

		this->hour = value;
		break;
	case MINUTE:
		if (value < 0 || value > 59) {
			cerr << "Invalid minute (minute = " << value << ")" << endl;
			return;
		}

		this->minute = value;
		break;
	case SECOND:
		if (value < 0 || value > 59) {
			cerr << "Invalid second (second = " << value << ")" << endl;
			return;
		}

		this->second = value;
		break;
	}
}

string Data::toString() {
	char buffer[20];
	sprintf(buffer, "%02d.%02d.%d %02d:%02d:%02d", day, month, year, hour, minute, second);

	string str(buffer);
	return str;
}

