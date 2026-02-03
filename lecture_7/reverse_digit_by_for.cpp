#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your input"<<" ";
    cin>>num;
    int rev=0;
    for(int i=num;i!=0;i++){
        int k=num%10;
        rev=rev*10+k;
    }
    cout<<rev<<endl;
        return 0;
}