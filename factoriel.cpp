#include<iostream>
using namespace std;
int main(){
    int num;
    int temp =1;
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 1 ; i<=num ; i++){
        temp = temp*i;
    }
    cout<<"The factorial of "<<num<<" is: "<<temp<<endl;
    return 0;
}