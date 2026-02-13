#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int oddsum=0;
    int evensum=0;
    while(n>0){
        int k=n%10;
    
    if(count%2==0){
        evensum+=k;
    }
    else{
       oddsum+=k;
    }
    count++;
    n=n/10;
}

cout<<evensum<<endl;
cout<<oddsum<<endl;

    return 0;

}