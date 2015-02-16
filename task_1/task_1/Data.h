#include <string>
using namespace std;

class Data {
private :
	int day;
	int month;
	int year;
	int hour;
	int minute;
	int second;

public:
	Data(int day, int month, int year, int hour, int minute, int second);

	int getDay();
	void setDay(int day);

	int getMonth();
	void setMonth(int month);

	int getYear();
	void setYear(int year);

	int getHour();
	void setHour(int hour);

	int getMinute();
	void setMinute(int minute);

	int getSecond();
	void setSecond(int second);

	string toString();
};