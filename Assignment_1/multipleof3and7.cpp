/*Write a program that takes an integer as input and determines whether it is a multiple of both 3 and 7. A number is a multiple of both if it is divisible by both numbers without leaving a remainder.*/
#include <iostream>
using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    // Dono conditions true honi chahiye
    if (N % 3 == 0 && N % 7 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}