#include <string>
#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){
	string partNumber;
	string partDescription; 
	int quantity;
	int itemPrice;
	cout << "Enter the part Number: ";
	cin >> partNumber;
	cin.ignore(); //flush the cin stream
	//cin.sync(); //doesn't work but may work in other c implementations
	cout << "Enter The part Description: ";
	getline(cin, partDescription);
	cout << "Enter the quantity: ";
	cin >> quantity;
	cout << "Enter the price per item: ";
	cin >> itemPrice;
	Invoice myInvoice(partNumber, partDescription, quantity, itemPrice);
	cout << "The invoice Total: " << myInvoice.getInvoiceAmount() << endl;
	myInvoice.getPartNumber();
}