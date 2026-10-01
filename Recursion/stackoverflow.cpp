#include<iostream>
using namespace std;
void greet(){
    cout<<"hello";
    greet();
}
int main(){
    greet();
return 0;
}

//Condition for an succesful recursion :-
//Base Case 
//Recursive call
//