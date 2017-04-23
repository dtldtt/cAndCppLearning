#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class  Rectangle
{
private:
	double Length;
	double Width;
public:
	void setLength(double x)
	{
		if(x<=0 || x>=20)
			x=1;
		Length=x;
	}
	void setWidth(double x)
	{
		if(x<=0 || x>=20)
			x=1;
		Width=x;
	}
	double getLength()
	{
		return Length;
	}
	double getWidth()
	{
		return Width;
	}
	double perimeter()
	{
		return (Length*2+Width*2);
	}
	double area()
	{
		return (Length*Width);
	}
};

//int main()
// {
// Rectangle r;
// double length,width;
//
// // cout<<"please input the length of Rectangle:";
// cin>>length;
// // cout<<"please input the width of Rectangle:";
// cin>>width;
// r.setLength(length);
// r.setWidth(width);
// cout<<"the perimeter is:"<<setprecision(2)<<fixed<<r.perimeter()<<endl;
// cout<<"the area is:"<<setprecision(2)<<fixed<<r.area()<<endl;
// return 0;
//
// } 