#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"value of number"<<endl;
    cin>>n;
    cout<<"OUTPUT"<<endl;
    int i = 0;
while (i <= n) {
    sum+=i;
    i++;
}
cout<<"sum of number"<<sum;
    return 0;
}