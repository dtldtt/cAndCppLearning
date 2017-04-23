#include <iostream>
using namespace std;
#include "Invoice.h"
int main()
{
	// create an Invoice object
	Invoice invoice("12345", "Hammer", 100, 5);

	// display the invoice data members and calculate the amount
	cout << "Part number: " << invoice.getPartNumber() << endl;
	cout << "Part description: " << invoice.getPartDescription() << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price per item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;

	// modify the invoice data members
	invoice.setPartNumber("123456");
	invoice.setPartDescription("Saw");
	invoice.setQuantity(-5); // negative quantity, so quantity set to 0
	invoice.setPricePerItem(10);
	cout << "\nInvoice data members modified.\n";

	// display the modified invoice data members and calculate new amount
	cout << "Part number: " << invoice.getPartNumber() << endl;
	cout << "Part description: " << invoice.getPartDescription() << endl;
	cout << "Quantity: " << invoice.getQuantity() << endl;
	cout << "Price per item: $" << invoice.getPricePerItem() << endl;
	cout << "Invoice amount: $" << invoice.getInvoiceAmount() << endl;
	return 0; // indicate successful termination
} // end main