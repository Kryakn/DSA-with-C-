/*Write a program that takes two integers as input and checks whether they are equal to each other or not.*/
#include <iostream>
using namespace std;

int main() {
    int A, B;
    if (!(cin >> A >> B)) return 0;

    // Compare A and B
    if (A == B) {
        cout << "Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
}