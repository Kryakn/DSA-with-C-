//Arrays-Calculate the Sum
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin>>n;

	vector<int>nums(n);

	for(int i=0; i<n; i++){
		cin>>nums[i];
	}

	int q;
	cin>> q;

	while(q>0){
		int x;
		cin>> x;

		vector<int>temp(n);

		for(int i= 0; i<n ; i++){
			int pichhe;

			if(i-x<0){
				pichhe = i - x + n ;
			}

			else{
				pichhe = i - x;
			}
			temp[i] = nums[i] + nums[pichhe];
		}
		nums=temp;
		q--;
	}
	int sum =0;
	for(int i=0; i<n; i++){
		sum = sum + nums[i];
	}

	cout<<sum % 1000000007;
	return 0;
}