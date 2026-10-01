#include<bits/stdc++.h>
using namespace std;
int sub(int x){
if(x==0){
    return 0;
}
int s=x-sub(x-1);
return s;
};
int main(){
    sub(10);
return 0;
}