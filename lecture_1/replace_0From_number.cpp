#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i = n; i >= 1; i--) {

        // leading spaces
        for (int s = 1; s < i; s++) {
            cout << "  ";
        }

        // left numbers
        for (int j = i; j <= n - 1; j++) {
            cout << j << " ";
        }

        // zero in center (as instructed)
        cout << "0"<<" ";

        // right numbers
        for (int j = n - 1; j >= i; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
