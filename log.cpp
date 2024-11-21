#include<iostream>
using namespace std;
int main(){
    int  num;
    int lg = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num/2>= 1 ){
       
        lg = lg+1;
         num /= 2;
    }
    cout <<"Log base 2 of " <<num<<" is: "<<lg<<endl;
}