#include<string>
#include<iostream>
using namespace std;

class Employee {
private:
	string firstName;
	string lastName;
	int monthSalary;
public:
	Employee(string fName, string lName, int mSalary);
	void setFirstName(string fName);
	void setLastName(string lName);
	void setMonthlySalary(int mSalary);
	string getFirstName();
	string getLastName();
	int getMonthlySalary();
};



Employee::Employee(string fName, string lName, int mSalary) {
	setFirstName(fName);
	setLastName(lName);
	setMonthlySalary(mSalary);
}
void Employee::setFirstName(string fName) {
	firstName = fName;
}
void Employee::setLastName(string lName) {
	lastName = lName;
}
void Employee::setMonthlySalary(int mSalary) {
	if (mSalary < 0) mSalary = 0;
	monthSalary = mSalary;
}
string Employee::getFirstName() {
	return firstName;
}
string Employee::getLastName() {
	return lastName;
}
int Employee::getMonthlySalary() {
	return monthSalary;
}