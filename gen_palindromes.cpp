#include <iostream>
using namespace std;

int main() {
    for(char a = 'a'; a <= 'z'; a++) {
        cout << a << endl;
    }
    for(char a = 'a'; a <= 'z'; a++) {
        cout << a << a << endl;
    }
    for(char a = 'a'; a <= 'z'; a++) {
        for(char b = 'a'; b <= 'z'; b++) {
            cout << a << b << a << endl;
        }
    }
    for(char a = 'a'; a <= 'z'; a++) {
        for(char b = 'a'; b <= 'z'; b++) {
            cout << a << b << b << a << endl;
        }
    }
    return 0;
}
