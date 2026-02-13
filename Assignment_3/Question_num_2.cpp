#include<iostream>
using namespace std;
int count(int n,int d){
	int count=0;
	while(n>0){
		int k=n%10;
		if(k==d){
			count++;
		}
		n=n/10;
	}
	cout<<count<<endl;
	return 0;
}
int main() {
	int n;
	cin>>n;
	int d;
	cin>>d;
	count(n,d);
	return 0;
}