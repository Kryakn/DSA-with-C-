#include<bits/stdc++.h>
using namespace std;
int fact(int m){
    if(m==0){
        return 1;
    }
    int x = m*fact(m-1);
    return x;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
return 0;
}