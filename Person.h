#pragma once
#include <iostream>
#include "Validation.h"
using namespace std;

class Person
{
protected:
	int Id;
	string Name;
	string Password;
public:
	Person() {
		Id = 1;
		Name = "Mohamed";
		Password = "Hashem";
	}

	Person(int id,string name,string password) {
		setId(id);
		setName(name);
		setPassword(password);
	}

	void setId(int id) {
		Id = id;
	}

	int getId() {
		return Id;
	}

	void setName(string name) {
		
		if (Validation::setName(name))
				Name = name;
		else if (name.length() < 5) 
			cout << "Name is less than 5" << endl;
		else if (name.length() > 20)
			cout << "Name is More than 20" << endl;
		else 
			cout << "You have Entered Unvalid Name" << endl;
	}

	string getName() {
		return Name;
	}
	
	void setPassword(string password) {
		
		if (Validation::setPassword(password))
				Password = password;
		else if (password.length() < 8)
			cout << "Name is less than 8" << endl;
		else
			cout << "Name is More than 20" << endl;
	}

	string getPassword() {
		return Password;
	}

	virtual void Display() {
		cout << "Id = " << getId() << endl;
		cout << "Name = " << getName() << endl;
		cout << "Password = " << getPassword() << endl;
	}
};

