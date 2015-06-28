#include <iostream>
#include "GradeBook.h"
#include <string>
using namespace std;

GradeBook::GradeBook(string name){
	setCourseName(name);
}
void GradeBook::setCourseName(string name){
courseName = name;
}

string GradeBook::getCourseName(){
return courseName;
}

void GradeBook::displayMessage(){
cout << "Hello to grade book system of " << getCourseName() << endl;
}