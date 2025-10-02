#include<iostream>
#include<string>
using namespace std;


class Employee{
	public:
		Employee(string, string, int);
		void setName(string);
		string getName();
		void setFamilyName(string);
		string getFamilyName();
		void setSalary(int);
		int getSalary();
	    int getYearlySalary();
		void displayMessage();

	private: 
	string name;
	string familyName;
	int salary;




};

