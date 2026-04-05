#include<iostream>
#include<vector>
using namespace std;
bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftmin(n);
        leftmin[0]=nums[0];
        for (int j = 1; j < n - 1; j++) {
            leftmin[j] = min(leftmin[j - 1], nums[j - 1]);
        }
        vector<int> rightmax(n);
        rightmax[n-1]=nums[n-1];
        for (int j = n - 2; j >= 0; j--) {
            rightmax[j] = max(rightmax[j + 1], nums[j + 1]);
        }
        for (int j = 1; j < n; j++) {
            int left = leftmin[j];
            int right = rightmax[j];
            int mid = nums[j];
            if (left < mid && mid < right) {
                return true;
            }
        }
        return false;
    }
int main(){
return 0;
}