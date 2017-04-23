#include<iostream>
using namespace std;
#include "Invoice.h";

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