#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your input"<<" ";
    cin>>num;
    int rev=0;
    while(num>0||num!=0){
        int k=num%10;
        rev=rev+k;
        num=num/10;
        
    }
    cout<<rev<<endl;
    cout<<abs(rev)<<endl;
        return 0;
}