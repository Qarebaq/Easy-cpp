#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main() {
    int n = 0;
    char HexChar[1000];
    cin >> HexChar;
    
    for (int i = 0; i < strlen(HexChar); i++) {
        if (HexChar[i] >= '0' && HexChar[i] <= '9') {
            HexChar[i] -= '0'; 
        } 
        else if (HexChar[i] >= 'A' && HexChar[i] <= 'F') {
            HexChar[i] -= 'A' - 10;  
        }
        else if (HexChar[i] >= 'a' && HexChar[i] <= 'f') {
            HexChar[i] -= 'a' - 10;
        } 
        else {
            cout << "Invalid hexadecimal character." << endl;
            return 1; 
            }
    }
    
    for (int i = 0; i < strlen(HexChar); i++) {
        n += (HexChar[i] * pow(16, strlen(HexChar) -1 - i)); 
    }

    cout << "Decimal is: " << n << endl;
    return 0;
}
