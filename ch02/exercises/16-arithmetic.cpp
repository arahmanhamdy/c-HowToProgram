/*
2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
*/
#include <iostream>
using namespace std;

int main(){
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	cout << "The sum : " << x + y << endl;
	cout << "The product : " << x * y << endl;
	cout << "The difference : " << x - y << endl;
	cout << "The quoitent : " << x / y << endl;
	return 0;
}