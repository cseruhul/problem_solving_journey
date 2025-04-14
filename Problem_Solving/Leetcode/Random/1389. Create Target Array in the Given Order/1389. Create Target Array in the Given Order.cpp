#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n, i;
        n = nums.size();
        vector<int>ans;

        for(i = 0; i < n; i++){
            ans.insert(ans.begin() + index[i], nums[i]);
        }
        return {ans};

    }
};

int main(){
    vector<int> nums = {0,1,2,3,4};
    vector<int> index = {0,1,2,2,1};
    vector<int> ans;

    Solution soln;
    ans = soln.createTargetArray(nums, index);
    for(auto item : ans){
        cout << item << " ";
    }
    return 0;
}
