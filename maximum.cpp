#include<iostream>
using namespace std;
int main(){
    int n;
    int temp = 0;
    int max = 0;
    cin>>n;
    for (int i = 1; i<=n; i++){
        cin>>temp;
        if (temp > max){
            max = temp;
        }
    }
    cout<<max<<endl;
    
}