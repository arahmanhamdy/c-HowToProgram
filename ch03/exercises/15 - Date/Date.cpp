#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

Date::Date(int day, int month, int year){
	setDay(day);
	setMonth(month);
	setYear(year);
}

void Date::displayDate(){
	cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}

void Date::setDay(int newDay){
	day = newDay;
}

void Date::setMonth(int newMonth){
	month = newMonth;
	if(newMonth < 1){
		month = 1;
	}
	if(newMonth > 12){
		month = 1;
	}
}

void Date::setYear(int newYear){
	year = newYear;
}

int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}