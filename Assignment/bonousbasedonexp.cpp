/*Write a program to calculate the bonus amount for an employee based on their years of experience. If the employee has 5 or more years of experience, they receive a bonus of 10% of their salary. Otherwise, they receive no bonus (0)*/
#include <iostream>
using namespace std;

int main() {
    long long salary;
    int experience;

    // Do space-separated integers input lena: pehla Salary, doosra Experience
    if (!(cin >> salary >> experience)) return 0;

    // Condition: Agar experience 5 saal ya usse zyada hai
    if (experience >= 5) {
        // Bonus salary ka 10% hoga
        long long bonus = salary * 0.10;
        cout << bonus << endl;
    } else {
        // Agar experience 5 saal se kam hai toh koi bonus nahi
        cout << 0 << endl;
    }

    return 0;
}