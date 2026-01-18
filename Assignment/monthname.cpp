/*Write a program that takes an integer representing a month number (1 to 12) and prints the corresponding month name.

1: January

2: February

3: March

4: April

5: May

6: June

7: July

8: August

9: September

10: October

11: November

12: December*/
#include <iostream>
using namespace std;

int main() {
    int month;
    // Input month number (1 to 12)
    if (!(cin >> month)) return 0;

    switch (month) {
        case 1:  cout << "January" << endl;   break;
        case 2:  cout << "February" << endl;  break;
        case 3:  cout << "March" << endl;     break;
        case 4:  cout << "April" << endl;     break;
        case 5:  cout << "May" << endl;       break;
        case 6:  cout << "June" << endl;      break;
        case 7:  cout << "July" << endl;      break;
        case 8:  cout << "August" << endl;    break;
        case 9:  cout << "September" << endl; break;
        case 10: cout << "October" << endl;   break;
        case 11: cout << "November" << endl;  break;
        case 12: cout << "December" << endl;  break;
        default: break; // 1-12 ke bahar koi output nahi chahiye
    }

    return 0;
}