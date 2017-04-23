#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
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

#endif
