/*
2.20 (Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
3.14159 for π . Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can
have decimal points.]
*/
#include <iostream>
using namespace std;

int main(){
	int radius;
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	cout << "the diameter equals " << radius * 2 << endl;
	cout << "the circumference equals " << 2 * 3.14159 * radius << endl;
	cout << "the area equals " << 3.14159 * radius * radius << endl;

	return 0;
}