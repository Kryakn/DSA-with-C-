#include<iostream>
using namespace std;
int series(int n1,int n2)
{
	int count=1;
	while(count<=n1){
		int check=3*count+2;
		if(check % n2!=0){
			cout<<check<<endl;
			
		}
		else{
			n1++;
		}	
	count++;
	}
	return 0;
}
int main()
{
	int n1;
	int n2;
	cin>>n1>>n2;
	series(n1,n2);
	return 0;
}