#include<iostream>
#include<string>
using namespace std;
class Account
{
private:
	double remain;
public:
	Account(double x)
	{
		setRemain(x);
	}
	void setRemain(double x)
	{
		if(x<0)
		{
			x=0;
			cout<<"\nError:Initial balance cannot be negative.\n\n";
		}
		remain=x;
		
	}
	void credit(double x)
	{
		remain=remain+x;
	}
	void debit(double x)
	{
		if(x>remain)
		{
			x=0;
			cout<<"Debit amount exceeded account balance.\n\n";
		}

		remain=remain-x;
	}
	double getBalance()
	{
		return remain;
	}
};

//int main()
// {
// Account account1(50.0);
//
// double withdrawalAmount;
// // cout<<"\nEnter withdrawal amount for account1:";
// cin>>withdrawalAmount;
// cout<<"\nattempting to subtract "<<withdrawalAmount<<" from account1 balance\n";
//
// account1.debit(withdrawalAmount);
// cout<<"account1 balance:$"<<account1.getBalance()<<endl;
//
// Account account2(-2);
// cout<<"account2 balance :$"<<account2.getBalance()<<endl;
// account2.credit(156.4);
// cout<<"\nattempting to add "<<156.4<<" to account2\n";
// cout<<"account2 balance :$"<<account2.getBalance()<<endl;
//
// return 0;
// }