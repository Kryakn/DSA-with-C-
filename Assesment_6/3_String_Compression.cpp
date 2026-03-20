#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.size();
    for(int i=0;i<n;){
         char curr=s[i];
         int count = 0;     
    while(i<n && s[i]==curr){
        count++;
        i++;
    }
    cout<<curr<<count;
}
return 0;
}