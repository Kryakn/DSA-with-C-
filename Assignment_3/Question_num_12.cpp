#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long res = 0;
      if(n == 0) {
        cout << 5;
        return 0;
    }

    while(n > 0){
        int k = n % 10;

        if(k == 0){
            k = 5;
        }

        res = res * 10 + k;   // reversed number
        n = n / 10;
    }

    // Reverse again 
    long long finalResult = 0;

    while(res > 0){
        int m = res % 10;
        finalResult = finalResult * 10 + m;
        res = res / 10;
    }

    cout << finalResult;

    return 0;
}