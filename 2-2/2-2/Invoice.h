#ifndef INVOICE_H
#define INVOICE_H
#include<string>

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

#endif
