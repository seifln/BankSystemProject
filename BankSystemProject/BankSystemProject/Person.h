#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

//=================== class person ====================
class Person {

	//attributes
protected:
	string name;
	int id;
	string password;
	double balance;

	//constructors
public:
	Person() {
		id = 0;
		balance = 0.0;
	}

	Person(string name, int id, string password, double balance) {
		this->name = name;
		this->id = id;
		this->password = password;
		this->balance = balance;
	}

	// Setters
	void setName(string name) {
		this->name = name;
	}

	void setId(int id) {
		this->id = id;
	}

	void setBalance(double balance) {
		this->balance = balance;
	}

	void setPassword(string password) {
		this->password = password;
	}

	//Getters
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	string getPassword() {
		return password;
	}
	double getBalance() {
		return balance;
	}


};

