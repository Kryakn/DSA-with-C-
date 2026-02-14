#include<iostream>
#include<algorithm>

using namespace std;
int lcm(int n,int m){
   int count=1;
     for(int i=max(n,m);i<=n*m;i++){
        if(i%n==0 && i%m==0){
         if(count==1){
           cout<<i<<endl;
           count++;
         }
        }
        
     }
     return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    lcm(n,m);
    return 0;
}