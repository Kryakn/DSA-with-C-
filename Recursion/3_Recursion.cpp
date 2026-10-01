#include<bits/stdc++.h>
using namespace std;
int sum(int x){
    if(x==0){
        return 0;
    }
  int n =x+sum(x-1);

    return n;
}
int main(){

    cout<< sum(10);
return 0;
}