#include "Employee.h"
#include<iostream>

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