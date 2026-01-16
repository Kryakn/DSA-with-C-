#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

if(n>=300&&n<=460){
    cout<<"macbook"<<endl;

}else if(n>=200&&n<=280){
    cout<<"kurkure"<<endl;

}else if(n>=1100&&n<=1500){
    cout<<"cycle"<<endl;

}else if(n>=50&&n<=80){
    cout<<"bike";
}else{
    cout<<"Better luck next time";
}
return 0;
}