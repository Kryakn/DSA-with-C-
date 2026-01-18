/*Write a program that takes the lengths of the three sides of a triangle and determines its type:

Equilateral: All three sides are equal.

Isosceles: Exactly two sides are equal.

Scalene: All three sides are different.*/
#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    
    // Teen space-separated integers input lena
    if (!(cin >> s1 >> s2 >> s3)) return 0;

    // 1. Equilateral: Teeno sides barabar honi chahiye
    if (s1 == s2 && s2 == s3) {
        cout << "Equilateral" << endl;
    }
    // 2. Isosceles: Koi bhi do sides barabar honi chahiye
    else if (s1 == s2 || s1 == s3 || s2 == s3) {
        cout << "Isosceles" << endl;
    }
    // 3. Scalene: Teeno sides alag honi chahiye
    else {
        cout << "Scalene" << endl;
    }

    return 0;
}