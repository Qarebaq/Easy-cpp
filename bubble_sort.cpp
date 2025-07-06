#include<iostream>
using namespace std;

void bubble_sort(float arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                float temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int n;
    cin >> n;
    float arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    cout << "Sorted array:" << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
