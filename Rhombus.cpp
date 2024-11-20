#include<iostream>
using namespace std;
int main(){
    int n;
    int temp=0;
    cin>>n;
    for(int i =1;i<=n;i++){
    temp = temp+1;
        for(int j=1;j<=n - i;j++){
            cout<<" ";
        }
       for (int k=1;k<=i;k++){
        cout<<"* ";
    }
    cout<<endl;
    }
    if (temp >= n){
            for(int z =n-1;z>=0;z--){
        for(int k=1;k<=n - z;k++){
            cout<<" ";
        }
       for (int q=1;q<=z;q++){
        cout<<"* ";
    }
    cout<<endl;
    }
    }
}
