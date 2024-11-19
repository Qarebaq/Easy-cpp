#include<iostream>
using namespace std;
void triangle(int n){
for (int i = 0 ; i < n ; i++){
    cout<<"*";

}
cout<<endl;
}

int main(){
int n;
cin>>n;
for(int i=0;i<=n;i++){
    triangle(i);
    
}
}