#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
	float length;
	float width;
public:
	Rectangle(float len = 1, float wid = 1);
	void setLength(float len);
	void setWidth(float wid);
	float getLength();
	float getWidth();
	float perimeter();
	float area();
};

#endif 
