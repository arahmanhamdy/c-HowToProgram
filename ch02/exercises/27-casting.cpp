/*
27 - Write a program that prints the integer equivalent of a character typed at the keyboard.
*/
#include <iostream>
using namespace std;

int main(){
	char str;
	cout << "enter the character: ";
	cin >> str;
	cout << static_cast<int>(str) << endl;
	return 0;
}