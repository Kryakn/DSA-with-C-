#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){//base case
        return;            
    }
    cout<<n<<endl;
    fun(n-1);//recursive call
};
int main(){
    int x=10;
    fun(x);
return 0;
}
// |         |
// |__fun(0)_|
// |__fun(1)_|
// |__fun(2)_|
// |__fun(3)_|
// |__fun(4)_|
// |__fun(5)_|