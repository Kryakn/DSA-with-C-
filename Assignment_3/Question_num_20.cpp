#include<iostream>
#include<cmath>
//Armstrong number checking
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n;
    int temp = n;
    int sum = 0;
    int l = 0;
    
    // Count digits
    while (temp != 0){
        temp = temp / 10;
        l++;
    }
    

    while (n != 0){
        int k = n % 10;
        sum = sum + pow(k, l);
        n = n / 10;
    }
    
    // Check and print result
    bool Arm = (m == sum);
    
    if(Arm){
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}