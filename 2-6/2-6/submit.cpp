#include<iostream>
using namespace std;
class Account {
public:
	Account(double b);
	void credit(double add);
	void debit(double fetch);
	double getBalance();
private:
	double balance;
};


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