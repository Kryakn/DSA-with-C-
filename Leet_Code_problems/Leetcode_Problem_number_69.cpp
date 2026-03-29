#include<iostream>
using namespace std;
int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        int s=1;
        int e=x;
        
        while (s<=e){
            int m=s+(e-s)/2;
          if(m==x/m){
            return m;
          }
          else if(m>x/m){
            e=m-1;
          }
          else{
            s=m+1;
          }
        }
       return e;
    }

int main(){
    int x;
    cin>>x;
    int r=mySqrt(x);
    cout<<r;
    return 0;
}
