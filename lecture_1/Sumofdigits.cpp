#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, num;

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0) {
        num = n % 10;
        sum +=num;
        n = n / 10;
    }

    cout << "Sum of digits = " << sum;
    return 0;
}
