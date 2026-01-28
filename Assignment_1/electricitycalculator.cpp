/*Write a program to calculate the total electricity bill based on the number of units consumed. The pricing is structured as follows:

For units less than or equal to 100: ₹2 per unit.

For units greater than 100 and less than or equal to 200: ₹3 per unit.

For units greater than 200: ₹5 per unit.*/
#include <iostream>
using namespace std;

int main() {
    int units;
    int total_bill = 0;

    // Input consumed units
    if (!(cin >> units)) return 0;

    // Slab 1: Units <= 100 (₹2 per unit)
    if (units <= 100) {
        total_bill = units * 2;
    } 
    // Slab 2: Units > 100 and <= 200 (₹3 per unit)
    else if (units <= 200) {
        total_bill = units * 3;
    } 
    // Slab 3: Units > 200 (₹5 per unit)
    else {
        total_bill = units * 5;
    }

    cout << total_bill << endl;

    return 0;
}