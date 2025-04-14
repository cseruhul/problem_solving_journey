#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n, i, ans = 0;
        n = nums.size();
        for(i = 0; i < n; i++){
            if(__builtin_popcount(i) == k)
                ans += nums[i];
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {5, 10, 1, 5, 2};
    int target = 1;
    Solution solnObj;

    solnObj.sumIndicesWithKSetBits(nums, target);

    return 0;
}
