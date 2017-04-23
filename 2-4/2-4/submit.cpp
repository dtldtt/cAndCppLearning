#include<iostream>
using namespace std;
class Date {
private:
	int month;
	int day;
	int year;
public:
	Date(int m, int d, int y);
	void setMonth(int m);
	void setDay(int d);
	void setYear(int y);
	int getMonth();
	int getDay();
	int getYear();
	void displayDate();
};

#include<iostream>
using namespace std;

Date::Date(int m, int d, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);
}
void Date::setMonth(int m) {
	if (m > 12 || m < 1) m = 1;
	month = m;
}
void Date::setDay(int d) {
	day = d;
}
void Date::setYear(int y) {
	year = y;
}
int Date::getMonth() {
	return month;
}
int Date::getDay() {
	return day;
}
int Date::getYear() {
	return year;
}
void Date::displayDate() {
	cout << month << "/" << day << "/" << year << endl;
}