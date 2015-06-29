#include <iostream>
#include <string>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string courseName, string instructorName){
	setCourseName(courseName);
	setInstructorName(instructorName);
}

void GradeBook::setCourseName(string course){
	courseName = course;
}

string GradeBook::getCourseName(){
	return courseName;
}

void GradeBook::setInstructorName(string instructor){
	instructorName = instructor;
}

string GradeBook::getInstructorName(){
	return instructorName;
}

void GradeBook::displayMessage(){
	cout << "Hello to grade book system of " << getCourseName() 
		 << "\nThis course is presented by: "<< getInstructorName() <<endl;
}
