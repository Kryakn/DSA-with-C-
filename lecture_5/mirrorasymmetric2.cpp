#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        //star
        for(j=1;j<=n-i+1;j++){
            cout<<"* ";

        }
        //spaces
        for(j=1;j<=2*i-3;j++){
            cout<<"  ";
        }
        if(i==1){
            for(j=1;j<=n-i;j++){
            cout<<"* ";
            }
        }else{
            for(j=1;j<=n-i+1;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}