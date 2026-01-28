#include<iostream>
using namespace std;

    // datatype function_name(argument){
    //code;
    //return type;
    //}
    int addition(int a,int b){
        int c=a+b;
        return c;
    }
    void greet(){
        cout<<"hello"<<endl;
    }
    void great(string name){
        cout<<"hello"<<name<<endl;
    }
    int add() {
        int a=10;
        int b=20;
        int c=a+b;
        return c;
    }
    // types of funtions
    /*
   1. no argument,no return
    example:- void greet()
   2.argument,no return 
    example:- void greet(string )
   3.no argument,return
   example:-int add() 
   4.argument,return
   example:-int addition()
    */
int main(){
    greet();
    great("aryan");
    cout<<add()<<endl;
    cout<<addition(5,10)<<endl;
    


    return 0;
}