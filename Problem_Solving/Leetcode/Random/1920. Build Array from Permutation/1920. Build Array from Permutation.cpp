#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i;
        vector<int> ans;
        ans = nums;
        for(i = 0; i < nums.size(); i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

int main(){
    Solution soln;
    vector<int> nums = {0,2,1,5,3,4};
    vector<int> ans;
    ans = nums;

    ans = soln.buildArray(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
