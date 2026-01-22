#include<iostream>
using namespace std;
int main(){
    int i, j,n;
    cin>>n;
    int k=1;
    for(i=1;i<=n;i++){
        //space
        for(j=1;j<=n-i;j++){
            cout<<"\t";

        }
        //pattern
        for(j=1;j<=2*i-1;j++){
            cout<<k<<"\t";
            k++;
        }
        cout<<endl;

    }
    return 0;

}