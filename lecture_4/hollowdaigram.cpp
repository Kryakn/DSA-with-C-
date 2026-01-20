#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    cin>>m;
    int n=(m+1)/2;
    for(i=1;i<=n;i++){
        //outerspace
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<"* ";
        //inner space
        for(j=1;j<=2*i-3;j++){
            cout<<"  ";

        }
        if(i!=1){
            cout<<"* ";

        }
        cout<<endl;

    }
     for(i=n-1;i>=1;i--){
        //outerspace
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        cout<<"* ";
        //inner space
        for(j=1;j<=2*i-3;j++){
            cout<<"  ";

        }
        if(i!=1){
            cout<<"* ";
            
        }
        cout<<endl;
    }
    return 0;
}
