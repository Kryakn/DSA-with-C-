//Write a program that takes an integer as input and determines if the number is positive, negative, or zero.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n>0){
        cout<<"Positive";
    }else if(n<0){
        cout<<"Negative";
    }else{
        cout<<"Zero";
    }
    return 0;
}