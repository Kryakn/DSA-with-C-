#include<iostream>
#include<vector>
using namespace std;

    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int closestsum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int currsum=nums[i]+nums[j]+nums[k];
                    if(abs(currsum-target)<abs(closestsum-target)){
                        closestsum=currsum;
                    }
                }
            }
        }
        return closestsum;
    }
int main(){
return 0;
}