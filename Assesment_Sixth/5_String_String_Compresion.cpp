#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n; ) {

        char current = s[i];
        int count = 0;

        // count same characters
        while (i < n && s[i] == current) {
            count++;
            i++;
        }

        // print in same line
        cout << current;

        if (count > 1) {
            cout << count;
        }
    }

    return 0;
}