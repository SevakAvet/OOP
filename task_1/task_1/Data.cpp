#include "Data.h"
#include <iostream>
using namespace std;

Data::Data(int day, int month, int year, int hour, int minute, int second) {
	this->day = day;
	this->month = month;
	this->year = year;
	this->hour = hour;
	this->minute = minute;
	this->second = second;
}

bool checkDay(Data* data, int day) {
	int month = data->getMonth();

	switch(month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		if(day >= 1 && day <= 31) {
			return true;
		}
	case 2:
		int year = data->getYear();
		if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
			if(day >= 1 && day <= 29) {
				return true;
			}
		} else {
			if(day >= 1 && day <= 28) {
				return true;
			}
		}
	case 4:
	case 6:
	case 9:
	case 11:
		if(day >= 1 && day <= 30) {
			return true;
		}
	}

	return false;
}

bool checkMonth(int month) {
	return month >= 1 && month <= 12;
}

bool checkYear(int year) {
	return year >= 0;
}

bool checkHour(int hour) {
	return hour >= 0 && hour <= 23;
}

bool checkMinute(int minute) {
	return minute >= 0 && minute <= 59;
}

bool checkSecond(int second) {
	return second >= 0 && second <= 59;
}

int Data::getDay() {
	return this->day;
}

void Data::setDay(int day) {
	if(!checkDay(this, day)) {
		cerr << "Invalid day (day = " << day << ")" << endl;
		return;
	}

	this->day = day;
}

int Data::getMonth() {
	return this->month;
}

void Data::setMonth(int month) {
	if(!checkMonth(month)) {
		cerr << "Invalid month (month = " << month << ")" << endl;
		return;
	}

	this->month = month;
}

int Data::getYear() {
	return this->year;
}

void Data::setYear(int year) {
	if(!checkYear(year)) {
		cerr << "Invalid year (year = " << year << ")" << endl;
		return;
	}

	this->year = year;
}

int Data::getHour() {
	return this->hour;
}

void Data::setHour(int hour) {
	if(!checkHour(hour)) {
		cerr << "Invalid hour (hour = " << hour << ")" << endl;
		return;
	}

	this->hour = hour;
}

int Data::getMinute() {
	return this->minute;
}

void Data::setMinute(int minute) {
	if(!checkMinute(minute)) {
		cerr << "Invalid minute (minute = " << minute << ")" << endl;
		return;
	}

	this->minute = minute;
}

int Data::getSecond() {
	return this->second;
}

void Data::setSecond(int second) {
	if(!checkSecond(second)) {
		cerr << "Invalid second (second = " << second << ")" << endl;
		return;
	}

	this->second = second;
}

string Data::toString() {
	return day + "." + month + "." + year + " " + hour + ":" + minute + ":" + second;
}

