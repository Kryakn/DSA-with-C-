#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<" "<<ptr<<" "<<*ptr<<" "<<&ptr<<" "<<&(*ptr);
    return 0;
}