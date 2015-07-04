/*
3.14 ( Employee Class) Create a class called Employee that includes three pieces of information as
data members—a first name (type string ), a last name (type string ) and a monthly salary (type
int ). [Note: In subsequent chapters, we’ll use numbers that contain decimal points (e.g., 2.75)—
called floating-point values—to represent dollar amounts.] Your class should have a constructor that
initializes the three data members. Provide a set and a get function for each data member. If the
monthly salary is not positive, set it to 0 . Write a test program that demonstrates class Employee ’s
capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Em-
ployee a 10 percent raise and display each Employee ’s yearly salary again.
*/

#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	string firstName;
	string lastName;
	int salary;
	cout << "Enter firstName for the first Employee: ";
	cin >> firstName;
	cout << "Enter lastName for the first Employee: ";
	cin >> lastName;
	cout << "Enter salary for the first Employee: ";
	cin >> salary;
	Employee firstEmployee(firstName, lastName, salary);
	cout << "Enter firstName for the second Employee: ";
	cin >> firstName;
	cout << "Enter lastName for the second Employee: ";
	cin >> lastName;
	cout << "Enter salary for the second Employee: ";
	cin >> salary;
	Employee secondEmployee(firstName, lastName, salary);
	
	cout << "****************************\n";

	cout << firstEmployee.getFirstName() << " "
		 << firstEmployee.getLastName() << " yearly salary: "
		 << firstEmployee.getSalary() * 12 << endl;

	cout << secondEmployee.getFirstName() << " "
		 << secondEmployee.getLastName() << " yearly salary: "
		 << secondEmployee.getSalary() * 12 << endl;

	//Add raise 10% for the employees
	firstEmployee.setSalary(firstEmployee.getSalary()+0.1*firstEmployee.getSalary());
	secondEmployee.setSalary(secondEmployee.getSalary()+0.1*secondEmployee.getSalary());
	
	cout << "****************************\n";

	cout << firstEmployee.getFirstName() << " "
		 << firstEmployee.getLastName() << " yearly salary: "
		 << firstEmployee.getSalary() * 12 << endl;

	cout << secondEmployee.getFirstName() << " "
		 << secondEmployee.getLastName() << " yearly salary: "
		 << secondEmployee.getSalary() * 12 << endl;
}