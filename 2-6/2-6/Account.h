#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
	Account(double b);
	void credit(double add);
	void debit(double fetch);
	double getBalance();
private:
	double balance;
};

#endif
