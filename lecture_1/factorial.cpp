#include <iostream>
using namespace std;

int main() {
    int n;
    long fact = 1;

    cout << "Enter a positive number: ";
    cin >> n;
    if(n<0){
        cout<<"enter valid entry"<<endl;
    
    }else{
    while (n > 0) {
        fact*=n;
        n--;
    }

    cout << "Factorial of "<<n<<"is"<< fact;
}
    return 0;
}
