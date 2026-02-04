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
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
         for(j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;

    }
    return 0;

}/*

        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/