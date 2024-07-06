#include "Person.h"

class Employee:Person {
protected:
	double Salary;
public:
	Employee() :Person() {
		Salary = 5000;
	}

	Employee(int id,string name,string password,double salary) :Person(id,  name,  password) {
		setSalary(salary);
	}
	void setSalary(double salary) {

		if (Validation::setSalary(salary))
			Salary = salary;
		else
		{
			cout << "\aYour Salary sholud be more than 5000$" << endl;
			exit(0);
		}
	}

	double getSalary() {
		return Salary;
	}

	virtual void Display() {
		Person::Display();
		cout << "Salary = " << getSalary() << endl;
		cout << "==============================" << endl;
	}
};