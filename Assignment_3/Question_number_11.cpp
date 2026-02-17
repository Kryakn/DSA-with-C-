#include<iostream>
using namespace std;
//CHEWBACCA NUMBER
int len(int n){
    int ans=0;
    while(n!=0){
        n=n/10;
        ans++;
    }
    return ans;
}
int reve(int n){
    int rev=0;
    while(n!=0){
        int k=n%10;
        rev=rev*10+k;
        n=n/10;

    }
    return rev;
}
int main(){
   
    int n;
    cin>>n;
    int l=len(n);
    int result=1;
    while(n!=0){
        int k=n%10;
        int inv=9-k;
    if(l==1 && inv==0){
        result=result*10+k;
        l--;
    }
   else if(inv<k){
        result=result*10+inv;
        l--;

    }
    else{
        result=result*10+k;
        l--;
    }
    n=n/10;
    }
    cout<<reve(result)/10<<endl;
    return 0;
}