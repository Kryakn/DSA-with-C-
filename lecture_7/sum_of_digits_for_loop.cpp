#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your input"<<" ";
    cin>>num;
    int rev=0;
    for(int i=num;i!=0;i=i/10){
        int k=i%10;
        rev=rev+k;
    }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl;
        return 0;
}