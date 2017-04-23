#include<string>
#include<iostream>
using namespace std;

class Invoice {
private:
	string componentID;
	string componentDes;
	int salesNum;
	int price;
public:
	Invoice(string, string, int, int);
	void setPartNumber(string);
	string getPartNumber();
	void setPartDescription(string);
	string getPartDescription();
	void setQuantity(int);
	int getQuantity();
	void setPricePerItem(int);
	int getPricePerItem();
	int getInvoiceAmount();
};


Invoice::Invoice(string id, string des, int num, int thePrice) {
	setPartNumber(id);
	setPartDescription(des);
	setQuantity(num);
	setPricePerItem(thePrice);
}
void Invoice::setPartNumber(string id) {
	componentID = id;
}
void Invoice::setPartDescription(string des) {
	componentDes = des;
}
void Invoice::setQuantity(int num) {
	if (num < 0) {
		num = 0;
		cout << "\nquantity cannot be negative. quantity set to 0.\n";
	}
	salesNum = num;
}
void Invoice::setPricePerItem(int thePrice) {
	if (price < 0)
		price = 0;
	price = thePrice;
}
string Invoice::getPartNumber() {
	return componentID;
}
string Invoice::getPartDescription() {
	return componentDes;
}
int Invoice::getQuantity() {
	return salesNum;
}
int Invoice::getPricePerItem() {
	return price;
}
int Invoice::getInvoiceAmount() {
	return price*salesNum;
}