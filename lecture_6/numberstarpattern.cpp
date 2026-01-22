#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            if(i==j){
                //star
                cout<<"* ";
            }else{
            cout<<j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}