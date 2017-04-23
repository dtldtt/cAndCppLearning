#include "Rational.h"
#include<iostream>
using namespace std;
int main()
{
	int firstN, firstD, secondN, secondD;
	char op;

	//    cout<<"Please input the numerator of first Rational: ";
	cin >> firstN;
	//    cout<<"Please input the denominator of first Rational: ";
	cin >> firstD;
	//    cout<<"Please input the numerator of second Rational: ";
	cin >> secondN;
	//    cout<<"Please input the denominator of second Rational: ";
	cin >> secondD;


	Rational r1(firstN, firstD), r2(secondN, secondD), r3;


	cin >> op;

	cout << "the Formal format of the first rational is : ";
	r1.printFormal();
	cout << "the Formal format of the second rational is : ";
	r2.printFormal();
	cout << endl;

	switch (op)
	{
	case '+':
		r3.add(r1, r2);
		r3.printBoth();
		break;
	case '-':
		r3.minus(r1, r2);
		r3.printBoth();
		break;
	case '*':
		r3.multi(r1, r2);
		r3.printBoth();
		break;
	case '/':
		r3.divide(r1, r2);
		r3.printBoth();
		break;
	default:
		cout << "Invalid operator!";
	}

	return 0;
}