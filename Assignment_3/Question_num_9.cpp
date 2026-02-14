#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    bool ans=true;
    // we are assuming earlier number is prime
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            ans=false;
        }
    }
        if(ans)
        {
            cout<<"Prime";

        }else{
            cout<<"Not Prime";
        }
    
    return 0;

}