#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	double length;
	double width;
public:
	Rectangle(double len = 1, double wid = 1);
	void setLength(double len);
	void setWidth(double wid);
	double getLength();
	double getWidth();
	double perimeter();
	double area();
};

#endif 
