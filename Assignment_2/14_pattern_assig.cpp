#include<iostream>
using namespace std;
int main ()
{
    int n, out;
    cin>>n;
    
   
    for(int i=1;i<=n+1;i++){
    	
  		for(int j=1; j<= i; j++){
        	cout<<n-j+1<<" ";   
        }
        //spaces

        for(int j =1; j <= 2*(n-i)+1; j++){
        	cout<<"  ";
        }

        for(int j=i; j>= 1; j--){
        	if(j != n+1)
        	cout<<n-j+1<<" ";   
        }

  		cout<<endl;
    } 
   	for(int i=n;i>=1;i--){
    	
  		for(int j=1; j<= i; j++){
        	cout<<n-j+1<<" ";   
        }
        //spaces

        for(int j =1; j <= 2*(n-i)+1; j++){
        	cout<<"  ";
        }

        for(int j=i; j>= 1; j--){
        	if(j != n+1)
        	cout<<n-j+1<<" ";   
        }

  		cout<<endl;
    } 
   	
   return 0;
}
// 7                           7 
// 7 6                       6 7
// 7 6 5                   5 6 7
// 7 6 5 4               4 5 6 7
// 7 6 5 4 3           3 4 5 6 7
// 7 6 5 4 3 2       2 3 4 5 6 7
// 7 6 5 4 3 2 1   1 2 3 4 5 6 7
// 7 6 5 4 3 2 1 0 1 2 3 4 5 6 7
// 7 6 5 4 3 2 1   1 2 3 4 5 6 7
// 7 6 5 4 3 2       2 3 4 5 6 7
// 7 6 5 4 3           3 4 5 6 7
// 7 6 5 4               4 5 6 7
// 7 6 5                   5 6 7
// 7 6                       6 7
// 7                           7