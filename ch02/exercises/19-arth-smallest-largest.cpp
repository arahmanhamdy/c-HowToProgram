/*
2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the key-
board and prints the sum, average, product, smallest and largest of these numbers. The screen dialog
should appear as follows:
Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
*/
#include <iostream>
using namespace std;

int main(){
	int x, y, z, smallest, largest;
	cout << "Input three different integers: ";
	cin >> x >> y >> z;
	cout << "Sum is: " << x + y + z << endl;
	cout << "Average is: " << (x + y + z)/3 << endl;
	cout << "product is: " << x * y * z << endl;
	smallest = x;
	if(y < smallest)
		smallest = y;
	if(z < smallest)
		smallest = z;
	largest = x;
	if(y > largest)
		largest = y;
	if(z > largest)
		largest = z;
	cout << "Smallest is: " << smallest << endl;
	cout << "Largest is: " << largest << endl;

	return 0;
}