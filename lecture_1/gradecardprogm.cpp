#include <iostream>
using namespace std;

int main() {
    int H, E, M, SST, S;
    int total;
    float percentage;
    char grade;

    cout << "Enter marks of 5 subjects (out of 100):\n";
    cin >> H >> E >> M >> SST >> S;

    total = H + M + E + SST + S;
    percentage = total / 5.0;
//LOGICAL PART
    if (percentage >= 90){
        grade = 'A';
    }else if (percentage >= 75){
        grade = 'B';
    }else if (percentage >= 60){
        grade = 'C';
    }else if (percentage >= 40){
        grade = 'D';
    }else{
        grade = 'F';
    }
//RESULT
    cout << "\n----- GRADE CARD -----\n";
    cout << "Total Marks : " << total << "/500\n";
    cout << "Percentage  : " << percentage << "%\n";
    cout << "Grade       : " << grade << endl;

    return 0;
}
