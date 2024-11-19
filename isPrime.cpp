#include <iostream>
using namespace std;
int main(){
    int num;
    int temp=0;
    cin >> num;
    for (int i = 2; i<num ; i++){
        if(num%i == 0){
            temp = temp+1;
        }

    }
    if (temp == 0 ){
        cout<<num<<" is prime"<<endl;
    }
    else{
        cout<<num<<" is not prime"<<endl;
    }
}