#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
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


int maxCommonDivisor(int x, int y);//求最大公约数

Rational::Rational(int n /* = 1 */, int d /* = 1 */) {
	int cd = maxCommonDivisor(n, d);
	numerator = n / cd;
	denominator = d / cd;
	typeStr = to_string(numerator) + "/" + to_string(denominator);
}
int Rational::getNumerator() {
	return numerator;
}
int Rational::getDenominator() {
	return denominator;
}
void Rational::add(Rational r1, Rational r2) {
	numerator = r1.getNumerator()*r2.getDenominator() + r2.getNumerator() * r1.getDenominator();
	denominator = r1.getDenominator() *r2.getDenominator();
	int commondivisior = maxCommonDivisor(numerator, denominator);
	numerator /= commondivisior;
	denominator /= commondivisior;
	typeStr = to_string(numerator) + "/" + to_string(denominator);
}
void Rational::minus(Rational r1, Rational r2) {
	numerator = r1.getNumerator()*r2.getDenominator() - r2.getNumerator() * r1.getDenominator();
	denominator = r1.getDenominator() *r2.getDenominator();
	int commondivisior = maxCommonDivisor(numerator, denominator);
	numerator /= commondivisior;
	denominator /= commondivisior;
	typeStr = to_string(numerator) + "/" + to_string(denominator);
}
void Rational::multi(Rational r1, Rational r2) {
	numerator = r1.getNumerator()*r2.getNumerator();
	denominator = r1.getDenominator() *r2.getDenominator();
	int commondivisior = maxCommonDivisor(numerator, denominator);
	numerator /= commondivisior;
	denominator /= commondivisior;
	typeStr = to_string(numerator) + "/" + to_string(denominator);
}
void Rational::divide(Rational r1, Rational r2) {
	numerator = r1.getNumerator()*r2.getDenominator();
	denominator = r1.getDenominator() *r2.getNumerator();
	int commondivisior = maxCommonDivisor(numerator, denominator);
	numerator /= commondivisior;
	denominator /= commondivisior;
	typeStr = to_string(numerator) + "/" + to_string(denominator);
}
void Rational::printFormal() {
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
	typeStr = to_string(numerator) + "/" + to_string(denominator);
	cout << typeStr << endl;
}
void Rational::printBoth() {
	if (denominator < 0)
	{
		numerator = -numerator;
		denominator = -denominator;
	}
	typeStr = to_string(numerator) + "/" + to_string(denominator);
	double up = numerator;
	double down = denominator;
	cout << "the Formal format of the rational is : " << typeStr << endl;
	cout << "the Fixed format of the rational is : " << setiosflags(ios::fixed) << setprecision(2) << up / down << endl;
}

int maxCommonDivisor(int x, int y) {
	if (x < y) {
		int t;
		t = x;
		x = y;
		y = t;
	}
	int remainder = x%y;
	while (remainder)
	{
		x = y;
		y = remainder;
		remainder = x%y;
	}
	return y;
}