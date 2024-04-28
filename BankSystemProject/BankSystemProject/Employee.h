#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

//=================== class Employee ====================

class Employee :public Person {
	//atributes
public:
	double salary;
	//setters

public:
	void setId(int empId) {
		id = empId;
	}

	void setName(string empName) {
		if (empName.length() >= 5 && empName.length() <= 20 && isalpha(empName[0])) {
			name = empName;
		}
		else {
			cout << "Error: Name must be between 5 and 20 alphabetic characters long." << endl;
		}
	}

	void setPassword(string empPassword) {
		if (empPassword.length() >= 8 && empPassword.length() <= 20) {
			password = empPassword;
		}
		else {
			cout << "Error: Password must be between 8 and 20 characters long." << endl;
		}
	}

	void setSalary(double empSalary) {
		if (empSalary >= 5000) {
			salary = empSalary;
		}
		else {
			cout << "Error: Minimum salary should be 5000." << endl;
		}
	}
	//getters
	int getId() {
		return id;
	}

	string getName() {
		return name;
	}

	string getPassword() {
		return password;
	}

	double getSalary() {
		return salary;
	}
	//methods
	void displayInfo() {
		cout << "Employee ID: " << id << endl;
		cout << "Employee Name: " << name << endl;
		cout << "Employee Password: " << password << endl;
		cout << "Employee Salary: " << salary << endl;
	}
};
