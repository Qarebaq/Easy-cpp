#include <iostream>
#include <iomanip>
using namespace std;

string calculate(int n) {
    float arr[n];
    float sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    float average = sum / n;
    float min_cost = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < average) {
            min_cost += average - arr[i];
        }
    }
    return "$" + to_string(min_cost);
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        
  
        cout <<fixed<<setprecision(2) << calculate(n) << endl;
        cin >> n;
    }
}
