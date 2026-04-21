#include<iostream>
using namespace std;
int increasing(int n){
    if(n<1){
        return 0;
    }
    increasing(n-1);
    cout<<n<<" ";
    return 0;
}
int main(){
    int n;
    cin>>n;
    increasing(n);
return 0;
}