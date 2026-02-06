#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int max_val;
    cout<<"value of a"<<endl;
    cin>>a;
    cout<<"value of b"<<endl;
    cin>>b;
    cout<<"value of c"<<endl;
    cin>>c;
    if(a>b&&a>c){
        max_val=a;
    } 
    else if(b>a&&b>c){
       max_val=b;
       }
       else{
        max_val=c;
       }
       cout<<endl<<max_val;
       return 0;
}
