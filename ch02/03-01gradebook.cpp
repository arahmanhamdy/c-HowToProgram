#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

int main(){
	string courseName;
	GradeBook myGradeBook("HII");
	cout << "the initial course name: "<< myGradeBook.getCourseName() << endl;
	cout << "Please enter the course name:" << endl;
	cin >> courseName; // read a course name with one word
	myGradeBook.setCourseName(courseName);
	//getline(cin , courseName); // read a course name with spaces (multi words)
	myGradeBook.displayMessage();
	return 0;
}