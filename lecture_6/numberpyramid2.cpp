#include<iostream>
using namespace std;
int main(){
    int i, j,n;
    cin>>n;
    
    for(i=1;i<=n;i++){
        //space
        for(j=1;j<=n-i;j++){
            cout<<"  ";

        }
        // left pattern
        for(j=i;j<=2*i-1;j++){
            cout<<j<<" ";
        } //right pattern
         for(j=2*i-2;j>=i;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;

}