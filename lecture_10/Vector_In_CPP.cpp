#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;//vector<int>a; vector ka size 2ki power n pr depend krti hai.
//size=how much elements are present,capacity= how much element can be entered.
int main(){
    //intialization
    vector<int>a;
    //entering the element in array
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    cout<<a.size()<<endl;
    cout<<a.capacity()<<endl;
  
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
      //for deleting the element from last
    a.pop_back();
   
    //after deleting the element size decreases but not capacity
    cout<<a.size()<<endl;
     cout<<a.capacity()<<endl;

    //for first element
    cout<<a.front()<<endl;

    //for last element
    cout<<a.back()<<endl;
    
    //for entering the element from begining
    a.insert(a.begin()+3,45);
  
    //for entering the element from last
    a.insert(a.end()-2,35);
    
    //for printing array
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //reverse
    reverse(a.begin(),a.end());
    //for printing array
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    sort(a.begin(),a.end());
    //for printing array
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}