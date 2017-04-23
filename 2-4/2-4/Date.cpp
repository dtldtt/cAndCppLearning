#include "Date.h"
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