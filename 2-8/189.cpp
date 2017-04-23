#include<iostream>
#include<iomanip>
using namespace std;
class  Rational
{
private:
	int a,b;
public:
	 Rational(int x=1,int y=1);
	 int simple();
	 void printFormal();
	 void printBoth();
	 void add(Rational &,Rational &);
	 void minus(Rational &,Rational &);
	 void multi(Rational &,Rational &);
	 void divide(Rational &,Rational &);
};
Rational::Rational(int x,int y)
{
	a=x;b=y;
	int t=simple();
	a=a/t;
	b=b/t;
}
int  Rational::simple()
{
	int p=a,q=b;
	int t=q%p,result;
	while(t!=0)
	{
		q=p;
		p=t;
		t=q%p;
	}
	result=p;
	return result;
}
void  Rational::printFormal()
{
	if((a<0 && b>0) || (a>0 && b<0))
	{
		cout<<"- "<<abs(a)<<"/"<<abs(b)<<endl;
	}
	else
	cout<<a<<"/"<<b<<endl;
}
void  Rational::printBoth()
{
	if((a<0 && b>0) || (a>0 && b<0))
	{

	   cout<<"the Formal format of the rational is : "<<"- "<<abs(a)<<"/"<<abs(b)<<endl;
	}
	else cout<<"the Formal format of the rational is : "<<a<<"/"<<b<<endl;
	  cout<<setprecision(2)<<fixed<<"the Fixed format of the rational is : "<<(double)a/b<<endl;
}
void Rational::add(Rational &x,Rational &y)
{
	a=x.a*y.b+y.a*x.b;
	b=x.b*y.b;
	int t=simple();
	a=a/t;
	b=b/t;
}
void Rational::minus(Rational &x,Rational &y)
{
	a=x.a*y.b-y.a*x.b;
	b=x.b*y.b;
	int t=simple();
	a=a/t;
	b=b/t;
}
void Rational::multi(Rational &x,Rational &y)
{
	a=x.a*y.a;
	b=x.b*y.b;
	int t=simple();
	a=a/t;
	b=b/t;
}
void Rational::divide(Rational &x,Rational &y)
{
	a=x.a*y.b;
	b=x.b*y.a;
	int t=simple();
	a=a/t;
	b=b/t;
}
//int main()
// {
// int firstN,firstD,secondN,secondD;
// char op;
//
// // cout<<"Please input the numerator of first Rational: ";
// cin>>firstN;
// // cout<<"Please input the denominator of first Rational: ";
// cin>>firstD;
// // cout<<"Please input the numerator of second Rational: ";
// cin>>secondN;
// // cout<<"Please input the denominator of second Rational: ";
// cin>>secondD;
//
//
// Rational r1(firstN,firstD),r2(secondN,secondD),r3;
//
//
// cin>>op;
//
// cout<<"the Formal format of the first rational is : ";
// r1.printFormal();
// cout<<"the Formal format of the second rational is : ";
// r2.printFormal();
// cout<<endl;
//
// switch(op)
// {
// case '+' :
// r3.add(r1,r2);
// r3.printBoth();
// break;
// case '-' :
// r3.minus(r1,r2);
// r3.printBoth();
// break;
// case '*':
// r3.multi(r1,r2);
// r3.printBoth();
// break;
// case '/':
// r3.divide(r1,r2);
// r3.printBoth();
// break;
// default:
// cout<<"Invalid operator!";
// }
//
// return 0;
// } 