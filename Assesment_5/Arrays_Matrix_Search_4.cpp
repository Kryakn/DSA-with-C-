#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    int n,m; // n is for rows and m is for columns
    cin>>n>>m;
	
	int count=0;
    vector<vector<int>> arr(n,vector<int> (m)); // initialized 2D vector
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j]; // input of 2D vector
        }
    }

	int target;
	cin>>target;

	 for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           if(arr[i][j]==target){
			   count++;
		   }
        }
	 }
		if (count>0){
			cout<<1;
		}
		else{
			cout<<0;
		}
		return 0;
    }
/*
Sample Input
3 3
3 30 38
44 52 54
57 60 69
62
Sample Output
0
Explanation
Search the element in the sorted matrix. 
If the element is present print 1 otherwise print 0. 
In the sample input,in first case 62 is not present in the matrix so 0 is printed. 
Similarly, for second case 55 is present in the matrix so 1 is printed.
*/