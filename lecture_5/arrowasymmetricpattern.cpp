#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
   
for(i=1;i<=n;i++){// column
    
    for (  j=1;j<=2*i-1;j++)//row
    {
        cout<<"  ";
    }
   for( j=1; j<=n-i+1;j++){
        cout<<"* ";
    }

cout<<endl;
}
for(i=n-1;i>=1;i--){// column
    
    for (  j=1;j<=2*i-1;j++)//row
    {
        cout<<"  ";
    }
   for( j=1; j<=n-i+1;j++){
        cout<<"* ";
    }

cout<<endl;
}


return 0;
}