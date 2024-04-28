#pragma once
#include<iostream>
#include<string>
#include "Person.h"
using namespace std;

//=================== class Client ====================
class Client : public  Person {
	//constructors
public:
	Client() {
		id = 0;
		balance = 0.0;
	}

	Client(string name, int id, string password, double balance) {
		this->name = name;
		this->id = id;
		this->password = password;
		this->balance = balance;
	}

	//setters
	void setId(int id) {
		this->id = id;
	}

	// Set name  with validation
	void setName(const string& newName) {
		if (newName.size() < 5 || newName.size() > 20) {
			cout << "Name must be between 5 and 20 characters";
		}
		for (char c : newName) {
			if (!isalpha(c)) {
				cout << "Name must contain only alphabetic characters";
			}
		}
		name = newName;
	}

	// set password  with validation
	void setPassword(const string& password) {
		if (password.size() < 8 || password.size() > 20) {
			cout << "Password must have a size between 8 and 20";
		}

		this->password = password;
	}

	//set min balance  
	void setBalance(double balance) {
		if (balance < 1500) {
			cout << "Balance must be at least 150";
		}
		this->balance = balance;
	}

	//getters
	int getId() {
		return id;
	}

	string getName() const {
		return name;
	}

	string getPassword() const {
		return password;
	}
	int getBalance() const {
		return balance;
	}
	//methods
	int deposit(int amount) {
		balance += amount;
		return balance;
	}
	int withdraw(int amount) {
		if (amount <= balance) {
			balance -= amount;
		}
		else {
			cout << "amount exceeded";
		}
		return balance;
	}
	//best practise variable naming
	int transfereTo(Client& a, int amount) {
		if (amount <= balance) {
			a.deposit(amount);
			balance -= amount;
		}
		else {
			cout << "Amount exceeded";
		}
		return balance;

	}
	void displayInfo() {
		cout << "client ID: " << id << endl;
		cout << "client Name: " << name << endl;
		cout << "client Password: " << password << endl;
		cout << "client balance: " << balance << endl;

	}

};
