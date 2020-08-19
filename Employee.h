//header file to set up Employee class
// Gergely Sajdik A00976672 1.0

#pragma once
#include <string>
using std::string;

class Employee {
public:
	explicit Employee(string, string, int);
	int getMonthlySalary() const;
	string getFirstName();
	string getLastName();
	void setMonthlySalary(int);
	void setFirstName(string);
	void setLastName(string);

private:
	int monthlySalary;
	string firstName;
	string lastName;
};