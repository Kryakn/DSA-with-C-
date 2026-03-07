//Arrays-Sorted Zeros And Ones
#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>nums(n);
	int a0=0;
	int b1=0;
	for(int i=0;i<n;i++){
		cin>>nums[i];
		if(nums[i]==0){
			a0++;
		}
		else{
			b1++;
		}
	}
	for(int i=0;i<a0;i++){
		cout<<0<<" ";
	}
	for(int i=0;i<b1;i++){
		cout<<1<<" ";
	}


	return 0;
}