#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int maxCount = 0;
    char mostChar = s[0];

    for (int i = 0; i < s.size(); i++) {
        int count = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostChar = s[i];
        }
    }

    cout << mostChar << endl;
}
