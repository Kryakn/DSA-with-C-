//row asymmetric
#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cin>>m;
    n=(m+1)/2;
    for(i=1;i<=n;i++){
        //left star
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        //spaces
        for(j=1;j<=2*i;j++){
            cout<<"  ";

        }
        //right star
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
     for(i=n;i>=1;i--){
        //left star
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        //spaces
        for(j=1;j<=2*i;j++){
            cout<<"  ";

        }
        //right star
        for(j=1;j<=n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}