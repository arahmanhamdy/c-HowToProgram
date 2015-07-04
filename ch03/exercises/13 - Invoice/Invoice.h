#include <string>
using namespace std;

class Invoice{
private:
	string partNumber;
	string partDescription; 
	int quantity;
	int itemPrice;
public:
	Invoice(string, string, int, int);
	void setPartNumber(string);
	string getPartNumber();
	void setPartDescription(string);
	string getPartDescription();
	void setQuantity(int);
	int getQuantity();
	void setItemPrice(int);
	int getItemPrice();
	int getInvoiceAmount();
};
