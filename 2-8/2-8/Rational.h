#include<string>
using namespace std;
#ifndef RATIONAL_H
#define RATIONAL_H
class Rational {
public:
	Rational(int n = 1, int d = 1);
	void add(Rational r1, Rational r2);
	void minus(Rational r1, Rational r2);
	void multi(Rational r1, Rational r2);
	void divide(Rational r1, Rational r2);
	void printFormal();
	void printBoth();
	int getNumerator();
	int getDenominator();
private:
	int numerator;
	int denominator;
	string typeStr;
};

#endif
