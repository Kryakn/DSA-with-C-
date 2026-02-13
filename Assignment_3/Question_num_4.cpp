#include<iostream>
#include<cmath>
using namespace std;
int BtoD(int n){
	int m=0;
    int g=0;
    while(n>0){
        int k=n%10;
         m=m+k*pow(2,g);
        g++;
        n=n/10;
    }
    
    cout<<m<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
   BtoD(n);
    return 0;
}