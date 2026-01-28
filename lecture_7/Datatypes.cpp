#include<iostream>
using namespace std;
int main(){
    long long int a=188888888888888888;//integer bucket=varriable int=4bytes,long int=8btytes
    float b=4.5;//long=4bytes,long long=8bytes,double=8bytes(decimal with presicion)
    //float 4bytes
    string c="aryan";
   double n=17.74;
    char m ;//1byte
    cout<<a<<endl;
cout<<sizeof(a)<<endl;
cout<<sizeof(b)<<endl;
cout<<sizeof(c)<<endl;
cout<<n*52.75<<endl;
cout<<sizeof(n)<<endl;
cout<<sizeof(m)<<endl;
    return 0;
}