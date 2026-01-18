//Write a program to determine if a given year is a leap year. A year is a leap year if:
//It is divisible by 400, OR
//It is divisible by 4 but not divisible by 100.
#include <iostream>
using namespace std;

int main() {
    int year;
    if (!(cin >> year)) return 0;

    // Logic: (Divisible by 400) OR (Divisible by 4 AND NOT divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap Year" << endl;
    } else {
        cout << "Not a Leap Year" << endl;
    }
    return 0;
}