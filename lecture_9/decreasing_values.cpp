#include<iostream>
using namespace std;
int decreasing(int n){
    if (n<1){
        return 0;
    }
    cout<<n<<" ";
    return decreasing(n-1);
}
int main(){
    int n;
    cin>>n;
    int a=decreasing(n);
    cout<<a;
return 0;
}