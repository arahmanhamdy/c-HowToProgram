#include <string>
using namespace std;

class Employee{
private:
	string firstName;
	string lastName;
	int salary;
public:
	Employee(string, string, int);
	void setFirstName(string);
	string getFirstName();
	void setLastName(string);
	string getLastName();
	void setSalary(int);
	int getSalary();
};