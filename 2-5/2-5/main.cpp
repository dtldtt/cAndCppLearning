#include "Rectangle.h"
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	Rectangle r;
	double length, width;

	//    cout<<"please input the length of Rectangle:";
	cin >> length;
	//    cout<<"please input the width of Rectangle:";
	cin >> width;
	r.setLength(length);
	r.setWidth(width);
	cout << "the perimeter is:" << setprecision(2) << fixed << r.perimeter() << endl;
	cout << "the area is:" << setprecision(2) << fixed << r.area() << endl;
	return 0;

}