#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << i << "\t";
        for(int k = 1; k <= i - 2; k++)
            cout << "0\t";
        if(i > 1)
            cout << i;
        cout << endl;
    }
    return 0;
}
/*
n=4,
1
2       2
3       0       3
4       0       0       4
*/