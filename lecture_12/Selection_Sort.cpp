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
    //Selection sort
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if (a[j]<a[min]){
                 min=j;
            }
             swap(a[j],a[j+1]);
        }
    }
    cout<<"Sorted through Selection sort"<<endl;
      for(int i=0;i<n;i++){
             cout<<a[i]<<" ";
        }

    return 0;
}

