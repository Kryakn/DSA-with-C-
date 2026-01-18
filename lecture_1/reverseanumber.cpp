#include <iostream>
using namespace std;

int main() {
    int n, opposite = 0;

    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        opposite = opposite * 10 + (n % 10);
        n = n / 10;
    }

    cout << "Reverse of an given number= " << opposite;
    return 0;
}
