#include "Person.h"
using namespace std;

class Client:Person
{
	double Balance;
public:
	Client():Person(){
		setBalance(1500);
	}

	Client(int id, string name, string password, double balance) :Person( id,  name,  password) {
		setBalance(balance);
	}

	void setBalance(double balance) {
		if (Validation::setBalance(balance))
			Balance = balance;
		else {
			cout << "\aYou should Enter Balance More than 1500$" << endl;
			exit(0);
		}
	}

	double getBalance() {
		return Balance;
	}
	void deposit(double amount) {
		Balance += amount;
	}
	void withdraw(double amount) {
		if (Balance - amount >= 1500)
			Balance -= amount;
		else 
		{
			cout << "\aYou Can't Withdraw Amount Less than 1500$" << endl;
			exit(0);
		}
	}
	void transferTo(double amount, Client& recipient) {
		withdraw(amount);
		recipient.Balance += amount;
	}
		void checkBalance(){
			if (Balance > 1500)
				cout << "You Can Withdraw and transferTo" << endl;
			else 
				cout<< "\aYou Can't Withdraw and transferTo Amount Less than 1500$" << endl;
		}

		void Display() {
			Person::Display();
			cout << "Balance = " << getBalance() << endl;
		}
};

