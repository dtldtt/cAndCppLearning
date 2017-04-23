#include "Date.h"
#include<iostream>
using namespace std;
// function main begins program execution
int main()
{
	Date date(5, 6, 1981); // create a Date object for May 6, 1981

						   // display the values of the three Date data members
	cout << "Month: " << date.getMonth() << endl;
	cout << "Day: " << date.getDay() << endl;
	cout << "Year: " << date.getYear() << endl;

	cout << "\nOriginal date:" << endl;
	date.displayDate(); // output the Date as 5/6/1981

						// modify the Date
	date.setMonth(13); // invalid month
	date.setDay(1);
	date.setYear(2005);

	cout << "\nNew date:" << endl;
	date.displayDate(); // output the modified date (1/1/2005)
	return 0; // indicate successful termination
} // end main