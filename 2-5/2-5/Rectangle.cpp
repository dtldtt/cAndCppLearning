#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(double len /* = 1 */, double wid /* = 1 */) {
	setLength(len);
	setWidth(wid);
}
void Rectangle::setLength(double len) {
	if (len >= 20 || len <= 0) len = 1;
	length = len;
}
void Rectangle::setWidth(double wid) {
	if (wid >= 20 || wid <= 0) wid = 1;
	width = wid;
}
double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() {
	return width;
}
double Rectangle::perimeter() {
	return 2 * (width + length);
}
double Rectangle::area() {
	return width*length;
}