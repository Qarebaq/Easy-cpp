#include <iostream>
using namespace std;

string decimalToHex(int decimal) {
    if (decimal == 0) return "0";  

    string hex = "";
    char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    while (decimal > 0) {
        int remainder = decimal % 16;       
        hex = hexChars[remainder] + hex;    
        decimal /= 16;                     
    }

    return hex;
}

int main() {
    int decimal;
    cout << "Enter Decimal: ";
    cin >> decimal;

    string hex = decimalToHex(decimal);
    cout <<"hex is:  " <<hex << endl;

    return 0;
}