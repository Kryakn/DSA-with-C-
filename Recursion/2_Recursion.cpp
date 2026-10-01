#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<endl;
};
int main(){
    int x;
    cin>>x;
   fun(x);
return 0;
}

        //          main()
        //            │
        //          x = 5
        //            │
        //         fun(5)
        //            │
        //         fun(4)
        //            │
        //         fun(3)
        //            │
        //         fun(2)
        //            │
        //         fun(1)
        //            │
        //         fun(0)
        //            │
        //       return
        //            │
        //      ┌─────┴─────┐
        //      ↓           │
        //   print 1        │
        //      ↓
        //   print 2
        //      ↓
        //   print 3
        //      ↓
        //   print 4
        //      ↓
        //   print 5

//Phase-1


// fun(5)
//   ↓
// fun(4)
//   ↓
// fun(3)
//   ↓
// fun(2)
//   ↓
// fun(1)
//   ↓
// fun(0)  ← base case