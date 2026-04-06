#include<iostream>
#include<vector>
using namespace std;
 bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxinteger=0;
        for(int i=0;i<n;i++){
            if(i>maxinteger){
                return false;
            }
            maxinteger=max(maxinteger,i+nums[i]);

        }
        return true;
    }
int main(){
return 0;
}