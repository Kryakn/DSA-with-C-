#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    // we are assuming earlier number is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            ans=false;

        }
    }
        if(ans)
        {
            cout<<"prime";

        }else{
            cout<<"non prime";
        }
    
    return 0;

}