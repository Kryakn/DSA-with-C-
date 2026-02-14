#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    int y=1;
    cout<<x<<" ";  // Print the first term (0)
    for(int i=1;i<n;i++){  // Loop runs n times
        
       int c=x+y;
       x=y;
       y=c;
       cout<<c<<" ";
    }
    return 0;
}