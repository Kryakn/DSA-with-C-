#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=__gcd(a,b);
    int LCM=(a*b)/c;
    cout<<LCM;
    return 0;
}