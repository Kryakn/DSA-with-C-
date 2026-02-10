#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],value,found=0;
    cout<<"enter elements";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"searching element";
    cin>>value;
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            cout<<"index of an element"<<i+1;
            found = 1;
            break;
        }
    }
    if (!found){
        cout<<"Not Found"<<endl;
    }


    return 0;
}