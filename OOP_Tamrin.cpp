#include <iostream>
#include <string>
#include "OOP_Tamrin.h"
using namespace std;


Account::Account(string n , int b){
    setName(n);
    setBalance(b);
}

void Account::setName(string n){
    name = n;
}
string Account::getName(){
    return name;
}
void Account::setBalance(int b){
    if (b>=0){
        balance = b;
    }
    else{
        balance = 0;
        cout<<"Initial balance was invalid."<<endl;
    }
}
int Account::getBalance(){
    return balance;

}

int Account::credit(int amount){
    balance = balance + amount;
    return balance;
}

int Account::debit(int amount){
    if (amount>balance){
        cout<<"Debit amount exceeded account balance."<<endl;
    }
    else{
        balance = balance - amount;
    }
    return balance;
}   
void Account::displayMessage(){
    cout<<"welcome "<<getName()<<"!"<<endl;
    cout<<"your balance is "<<getBalance()<<endl;
}





int main(){
    Account account1("Jane Green", 50);
    Account account2("John Blue", -7);
    account1.displayMessage();
    account2.displayMessage();
    cout<<endl;
    cout<<"adding 100 to account1 balance"<<endl;
    account1.credit(100);
    cout<<"new balance of account1 is: "<<account1.getBalance()<<endl;
    cout<<endl;
    cout<<"subtracting 50 from account2 balance"<<endl;
    account2.debit(50);
    cout<<"new balance of account2 is: "<<account2.getBalance()<<endl;
    cout<<endl;
    cout<<"subtracting 800 from account1 balance"<<endl;
    account1.debit(800);
    cout<<"new balance of account1 is: "<<account1.getBalance()<<endl;

    return 0;
}   






