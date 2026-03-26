#include <iostream>
using namespace std;

void printTrishul(int n) {
    // Ensure the size n is an odd number for a better shape, if possible.
    // The pattern size is relative to n. A suggested n would be 7 or more.
    int mid = n / 2;

    // Upper part (the three prongs)
    for (int i = 0; i < mid; i++) {
        for (int j = 0; j < n; j++) {
            // Stars at the center, mid-left, and mid-right columns
            if (j == mid || j == mid / 2 || j == n - 1 - mid / 2) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Middle horizontal bar (optional, can adjust based on visual preference)
    for (int i = 0; i < n; i++) {
        cout << "*";
    }
    cout << endl;

    // Lower part (the handle)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Star only in the center column
            if (j == mid) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter an odd number for the size (e.g., 7): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 1;
    }

    printTrishul(n);
    return 0;
}