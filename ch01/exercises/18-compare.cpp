/*
2.18 (Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal . "
*/

#include <iostream>
using namespace std;

int main(){
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;
	if(x > y)
		cout << x << " is larger \n";
	else if (x < y)
		cout << y << " is larger \n";
	else 
		cout << "These numbers are equal .\n";
	return 0;
}