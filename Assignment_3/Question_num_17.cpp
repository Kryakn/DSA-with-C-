#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int m, n;
        cin>>m>>n;
        
        int aayush = 1;
        int harshit = 2;
        
        while(true){
            // Aayush's turn
            if(aayush <= m){
                m = m - aayush;
                aayush = aayush + 2;
            }
            else{
                cout<<"Harshit"<<endl;
                break;
            }
            
            // Harshit's turn
            if(harshit <= n){
                n = n - harshit;
                harshit = harshit + 2;
            }
            else{
                cout<<"Aayush"<<endl;
                break;
            }
        }
    }
    
    return 0;
}