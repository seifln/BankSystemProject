#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;
//=================== class Admin ====================

class Admin :public Person {
private:
	double salary;
public:

	// Constructors
	Admin() {

	}
	Admin(int adminId, string adminName, string adminPassword, double adminSalary) {
		id = adminId;
		name = adminName;
		password = adminPassword;
		salary = adminSalary;
	}

	// Setter functions
	void setName(string adminName) {
		if (adminName.length() >= 5 && adminName.length() <= 20) {
			// Check if the name contains only alphabetic characters
			bool isAlpha = true;
			for (char c : adminName) {
				if (!isalpha(c)) {
					isAlpha = false;
					break;
				}
			}
			if (isAlpha) {
				name = adminName;
			}
			else {
				cout << "Name must contain only alphabetic characters." << endl;
			}
		}
		else {
			cout << "Name must be between 5 and 20 characters long." << endl;
		}
	}

	void setPassword(string adminPassword) {
		if (adminPassword.length() >= 8 && adminPassword.length() <= 20) {
			password = adminPassword;
		}
		else {
			cout << "Password must be between 8 and 20 characters long." << endl;
		}
	}

	void setSalary(double adminSalary) {
		if (adminSalary >= 5000) {
			salary = adminSalary;
		}
		else {
			cout << "Salary cannot be less than 5000." << endl;
		}
	}

	// Getter functions
	int getId() const {
		return id;
	}

	string getName() const {
		return name;
	}

	string getPassword() const {
		return password;
	}

	double getSalary() const {
		return salary;
	}

	// Display function
	void displayInfo() const {
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
};


