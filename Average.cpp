#include <iostream>
using namespace std;
int main(){
    float n;
    float x;
    cin>>n;
    float m = n;
    for (int i = 0;i<=n;i++){
        x = x + m;
        m = m -1;
    }
    cout<<"Average from 1 to your number is : "<<x/n<<endl;
}