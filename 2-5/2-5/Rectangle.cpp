#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(float len /* = 1 */, float wid /* = 1 */) {
	setLength(len);
	setWidth(wid);
}
void Rectangle::setLength(float len) {
	if (len > 20 || len < 0) len = 1;
	length = len;
}
void Rectangle::setWidth(float wid) {
	if (wid > 20 || wid < 0) wid = 1;
	width = wid;
}
float Rectangle::getLength() {
	return length;
}
float Rectangle::getWidth() {
	return width;
}
float Rectangle::perimeter() {
	return 2 * (width + length);
}
float Rectangle::area() {
	return width*length;
}