/*Write a program that takes a person's age as input and determines if they are eligible to vote. A person is eligible to vote if their age is 18 or greater.*/
#include <iostream>
using namespace std;

int main() {
    int age;
    
    
    if (!(cin >> age)) return 0;

   
    if (age >= 18) {
        cout << "Eligible" << endl;
    } else {
        cout << "Not Eligible" << endl;
    }

    return 0;
}