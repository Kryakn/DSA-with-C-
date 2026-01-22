#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            if(j%2==0){
                //star
                cout<<"* ";
            }else{
            cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=2*i-1;j++){
            if(j%2==0){
                //star
                cout<<"* ";
            }else{
            cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}