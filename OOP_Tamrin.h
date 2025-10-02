#include <iostream>
#include <string>
using namespace std;

class Account{
    public:
    Account(string , int);
    void setName(string);
    string getName();
    void setBalance(int);
    int getBalance();
    void displayMessage();
    int credit(int);
    int debit(int);

    private:
    string name;
    int balance;
};
