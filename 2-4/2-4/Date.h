#ifndef DATE_H
#define DATE_H

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

#endif
