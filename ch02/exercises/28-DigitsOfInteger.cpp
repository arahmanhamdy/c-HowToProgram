/*
2.28 (Digits of an Integer) Write a program that inputs a five-digit integer, separates the integer
into its digits and prints them separated by three spaces each. [Hint: Use the integer division and
modulus operators.] For example, if the user types in 42339, the program should print:
4 	2 	3 	3 	9
*/
#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter a five digit number: ";
	cin >> num;
	cout << num/10000 << "\t";
	num = num % 10000;
	cout << num/1000 << "\t";
	num = num % 1000;
	cout << num/100 << "\t";
	num = num % 100;
	cout << num/10 << "\t";
	num = num % 10;
	cout << num << endl;
	return 0;
}