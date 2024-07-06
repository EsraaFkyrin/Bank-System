#pragma once
#include <iostream>
using namespace std;

class Validation
{
public:
	static bool setName(string name) {

		if (name.length() >= 5 && name.length() <= 20)
		{
			for (int i = 0; i < name.size(); i++) {

				if (!isalpha(name[i])) 
					return false;
			}
		}

		return true;
	}

	static bool setPassword(string password) {

		if (password.length() >= 8 && password.length() <= 20)
			return true;
		else
			return false;
	}

	static bool setBalance(double balance) {
		if (balance < 1500)
			return false;
		else
			return true;
	}

	static bool setSalary(double salary) {
		if (salary >= 5000)
			return true;
		else
			return false;
	}
};

