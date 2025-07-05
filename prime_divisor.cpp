#include<iostream>
using namespace std;
int is_Prime(int num){
    int temp =0;
    for(int i=2 ;i<num; i++){
        if((num%i)==0){
            temp += 1;
        }
    }
    if (temp != 0){
        return false;
    }
    else{
       return true;
    }
}

int main(){
    int num;
    cin >>num;
    for(int i=2;i<num;i++ ){
        if((num%i)==0){
            if(is_Prime(i)==true){
                cout<<i<<endl;
            }
        }
    }
}
