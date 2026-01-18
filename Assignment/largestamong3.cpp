/*Write a program that takes three integers as input and determines which one is the largest.*/
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    if (!(cin >> A >> B >> C)) return 0;

    if (A >= B && A >= C) {
        // Agar A, B aur C dono se bada ya barabar hai
        cout << A << endl;
    } else if (B >= A && B >= C) {
        // Agar B sabse bada hai
        cout << B << endl;
    } else {
        // Agar upar dono galat hain, toh C hi sabse bada hoga
        cout << C << endl;
    }
    return 0;
}