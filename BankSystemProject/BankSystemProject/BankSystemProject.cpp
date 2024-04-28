#include<iostream>
#include<string>
#include<cctype> //to validate the setName function
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
int main(){

	//=================================================================
		// Create a client object
	Client client;

	// Set client
	client.setId(1001);
	client.setName("seifkhaled");
	client.setPassword("seifkhaled123");
	client.setBalance(10000.0);

	// deposit money
	client.deposit(500);

	//withdraw money
	client.withdraw(1000);

	// Display info
	cout << "\client Information:" << endl;
	client.displayInfo();
	//================================================================


	//=================================================================
		// Create an employee object

	Employee employee;
	//set employee
	employee.setId(1002);
	employee.setName("kareemahmed");
	employee.setPassword("kareemahmed123");
	employee.setSalary(20000.0);

	// Display admin information
	cout << "==================================" << endl;
	cout << "\employee Information:" << endl;
	employee.displayInfo();
	//=================================================================


	// Create an admin object
	//=================================================================
	Admin admin;

	// Set admin attributes

	admin.setName("Adminomar");
	admin.setPassword("Adminomar123");
	admin.setSalary(30000.0);

	// Display admin information
	cout << "==================================";
	cout << "\nAdmin Information:" << endl;
	admin.displayInfo();
	//==================================================================
	return 0;
}
