/*
2.25 (Multiples) Write a program that reads in two integers and determines and prints if the first
is a multiple of the second. [Hint: Use the modulus operator.]
*/
#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	cout << "Enter the two integers: ";
	cin >> num1 >> num2;
	if(num2 % num1 == 0)
		cout << "The first number is a multiple of the second number" << endl;
	if(num2 % num1 != 0)
		cout << "The first number is not a multiple of the second number" << endl;
	return 0;
}