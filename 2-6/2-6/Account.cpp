#include "Account.h"
#include<iostream>
using namespace std;

Account::Account(double b) {
	if (b < 0) {
		b = 0;
		cout << "\nError:Initial balance cannot be negative.\n\n";
	}
	balance = b;
} 
void Account::credit(double add) {
	balance += add;
}
void Account::debit(double fetch) {
	if (fetch > balance) {
		cout << "Debit amount exceeded account balance.\n\n";
		
	}
	else {
		balance -= fetch;
	}
}
double Account::getBalance() {
	return balance;
}