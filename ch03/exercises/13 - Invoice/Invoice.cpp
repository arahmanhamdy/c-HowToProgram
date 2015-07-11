#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice(string number, string description, int quantity, int price){
	setPartNumber(number);
	setPartDescription(description);
	setQuantity(quantity);
	setItemPrice(price);
}

void Invoice::setPartNumber(string number){
	partNumber = number;
}

string Invoice::getPartNumber(){
	return partNumber;
}

void Invoice::setPartDescription(string description){
	partDescription = description;
}

string Invoice::getPartDescription(){
	return partDescription;
}

void Invoice::setQuantity(int qty){
	if(qty < 0)
		quantity = 0;
	else
		quantity = qty;
}

int Invoice::getQuantity(){
	return quantity;
}

void Invoice::setItemPrice(int price){
	if(price < 0)
		price = 0;
	else
		itemPrice = price;
}

int Invoice::getItemPrice(){
	return itemPrice;
}

int Invoice::getInvoiceAmount(){
	return quantity * itemPrice;
}
