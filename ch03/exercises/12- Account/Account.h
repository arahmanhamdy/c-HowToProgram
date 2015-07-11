class Account{
private:
	int balance;
public:
	Account(int initialBalance);
	void getBalance();
	void credit(int);
	void debit(int);
};