/*
30 - Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index.
*/
#include <iostream>
using namespace std;

int main(){
	int weight, height;
	cout << "Enter your weight in KG: ";
	cin >> weight;
	cout << "Enter your height in meters: ";
	cin >> height;
	cout << "Your BMI equals: " << weight / (height * height) << endl;
	return 0;
}