#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if (a[j]==a[j+1]){

                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"Sorted through bubble sort"<<endl;
      for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
        }

    return 0;
}