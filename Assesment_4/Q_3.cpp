//Arrays-linear search
#include<iostream>
using namespace std;
int linearSearch(int N,int M,int arr[]){

	   for(int i = 0; i < N; i++) {
        //comparing each elements of array from the key
        if(arr[i] == M) {
			return i;
        }
    }
        return -1;
	
}
int main() {
    int N;
    cin>>N;
    int arr[N], M;

    for(int i = 0; i < N; i++){
    	cin >> arr[i];
	}
    cin >> M;
	cout<<linearSearch(N,M,arr);

    return 0;
}