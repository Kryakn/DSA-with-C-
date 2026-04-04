#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if(n<=1){
     return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }
    return issorted(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    if(issorted(arr,n)){
        cout<<"sorted";
    }
    else{
        cout<<"tryagain";
    }
return 0;
}