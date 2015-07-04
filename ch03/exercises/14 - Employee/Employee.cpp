#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(string firstName, string lastName, int salary){
	setFirstName(firstName);
	setLastName(lastName);
	setSalary(salary);
}

void Employee::setFirstName(string first){
	firstName = first;
}

void Employee::setLastName(string last){
	lastName = last;
}

void Employee::setSalary(int sal){
	if(sal < 0)
		salary = 0;
	else
		salary = sal;
}

string Employee::getFirstName(){
	return firstName;
}

string Employee::getLastName(){
	return lastName;
}

int Employee::getSalary(){
	return salary;
}