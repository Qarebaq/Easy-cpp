#include<iostream>
#include<string>
#include "OOP_Tamrin3.h"
using namespace std;

Employee::Employee(string Name, string fName , int Salary){
setName(Name);
setFamilyName(fName);
setSalary(Salary);

};


void Employee::setName(string Name){
name = Name;

};

string Employee::getName(){
return name;

};


void Employee::setFamilyName(string fName){
	familyName = fName;

};

string Employee::getFamilyName(){
	return familyName;

};

void Employee::setSalary(int s){
	if (s<=0){
		cout<<"Salary most be greater than Zero"<<endl;
		salary = 0;
	}
	else{
		salary = s;
	};
};

int Employee::getSalary(){
	return salary;

};

int Employee::getYearlySalary(){
return 12*salary;

};

void Employee::displayMessage(){

cout<<"Welcome "<<getName()<<" "<<getFamilyName()<<"!"<<endl;

cout<<"your monthly salary is "<<getSalary()<<" and your yearly income is "<<getYearlySalary()<<"!"<<endl;


};




int main(){

Employee employee("Ali" , "Hassani" , 12000);
employee.displayMessage();

}





