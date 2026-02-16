#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int start, end;
    cin>>start>>end;
    
    for(int m=start; m<=end; m++){
        int og = m;
        int temp = m;
        int n = m;
        int sum = 0;
        int l = 0;
        
        // Count digits
        while(temp != 0){
            temp = temp / 10;
            l++;
        }
        
        // Calculate sum of powers
        while(n != 0){
            int k = n % 10;
            sum = sum + pow(k, l);
            n = n / 10;
        }
        
        // Check if Armstrong
        if(og == sum){
            cout<<og<<" ";
        }
    }
    
    return 0;
}