#include<iostream>
using namespace std;
int findMax(int arr[], int n) {
    if (n == 0) return -1; // or handle as per constraint

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMax(arr,n)<<endl;
    return 0;
}