#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n){
    if(n==0){
        return 0;
    }
    int sum = 0;
    sum = (n%10)+sumofdigit(n/10);
    return sum;
}
int main(){ 
int x;
cin>>x;
cout<<sumofdigit(x);
return 0;
}