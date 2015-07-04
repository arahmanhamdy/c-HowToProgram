#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(int initialBalance){
	if(initialBalance >= 0){
		balance = initialBalance;
	}
	else{
		balance = 0;
		cout << "the initial balance was invalid." << endl;
	}
}

void Account::credit(int amount){
	balance += amount;
}

void Account::debit(int amount){
	if(amount > balance){
		cout << "Debit amount exceeded account balance." << endl;
	}
	else{
		balance -= amount;
	}
}

void Account::getBalance(){
	cout << "your current balance is: " << balance << endl;
}