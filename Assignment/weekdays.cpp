/*Write a program that takes an integer representing a day number (1 to 7) and prints the corresponding day name. Assume the week starts with Monday.

1: Monday

2: Tuesday

3: Wednesday

4: Thursday

5: Friday

6: Saturday

7: Sunday*/
#include <iostream>
using namespace std;

int main() {
    int day;
    // Input number (1 to 7)
    if (!(cin >> day)) return 0;

    // Switch case to match the number with the day name
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            // Agar input 1-7 ke bahar ho (optional safety check)
            break;
    }

    return 0;
}