#include<iostream>
using namespace std;
int main(){
    int step,min,max;
    cin>>step>>min>>max;
      int f=min;
      while(f<=max){
        int c=(f-32)*5/9;
        cout<<f<<"\t"<<c<<endl;;
        f=f+step;
      }

    return 0;
}
//logic with for loop
/*
for(int i=min;i<=max;i=i+n){
int c=(i-32)*5/9;
cout<<i<<"\t"<<c;

}
*/