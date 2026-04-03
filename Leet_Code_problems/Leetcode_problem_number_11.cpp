#include<iostream>
#include<vector>
using namespace std;
int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0;
        int rp=height.size()-1;
        while(lp<rp){
            int w = rp-lp;
            int ht = min(height[lp],height[rp]);
            int curWater = w * ht;//area
            maxWater=max(maxWater,curWater);
            if(height[lp]<height[rp]){
                lp++;
            }
            else{
                rp--;
            }
        }
        return maxWater;
    }

int main(){
    return 0;
}