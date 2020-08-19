//Implementation file for Employee class
// Gergely Sajdik A00976672 1.0

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(string firstName, string lastName, int salary) {
	if (firstName.length() < 2) {
		cerr << "\nWarning - invalid length string entered for first name in ctor: " << firstName << endl;
		cout << "The string that was entered will be used for now." << endl;
		this->firstName = firstName;
	}
	else {
		this->firstName = firstName;
	}

	if (lastName.length() < 2) {
		cerr << "\nWarning - invalid length string entered for last name in ctor: " << lastName << endl;
		cout << "The string that was entered will be used for now." << endl;
		this->lastName = lastName;
	}
	else {
		this->lastName = lastName;
	}

	if (salary < 0) {
		cout << "\nInvalid salary amount specified in ctor: $" << salary << endl;
		cout << "Salary set to $0 instead." << endl;
		monthlySalary = 0;
	}
	else {
		monthlySalary = salary;
	}
}

int Employee::getMonthlySalary() const {
	return monthlySalary;
}

string Employee::getFirstName() {
	return firstName;
}

string Employee::getLastName() {
	return lastName;
}

void Employee::setMonthlySalary(int salary) {
	if (salary >= 0) {
		monthlySalary = salary;
	}
	else {
		cout << "\nERROR - Invalid salary amount specified : $" << salary << endl;
		cout << "Salary was left unchanged at: $" << monthlySalary << endl;
	}
}

void Employee::setFirstName(string firstName) {
	if (firstName.length() < 2) {
		cout << "\nERROR - invalid length string entered for first name in setFirstName(): " << firstName << endl;
		cerr << "The first name is was left unchanged: " << this->firstName << endl;
	}
	else {
		this->firstName = firstName;
	}
}

void Employee::setLastName(string lastName) {
	if (lastName.length() < 2) {
		cerr << "\nERROR - invalid length string entered for last name in setLastName(): " << lastName << endl;
		cerr << "The last name is was left unchanged: " << this->lastName << endl;
	}
	else {
		this->lastName = lastName;
	}
}

