#include<iostream>
using namespace std;
int main()
{
    int a,b,max_val;
    cout<<"value of a"<<endl;
    cin>>a;
    cout<<"value of b"<<endl;
    cin>>b;
    if(a>b){
        max_val=a;
    }else{
        max_val=b;
    }
    cout<<"maximum of a and b is"<<max_val<<endl;
    return 0;
    
}