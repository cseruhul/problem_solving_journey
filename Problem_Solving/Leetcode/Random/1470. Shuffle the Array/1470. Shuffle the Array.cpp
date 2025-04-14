#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(n*2);
        int i = 0, j = 0;

        for(i; i < n; i++){
            ans[j++] = nums[i];
            ans[j++] = nums[i + n];
            //ans.push_back(nums[]);
        }
        return ans;
/*
        for(i = 0; i < 2 * n; i++){
            cout << ans.at(i) << " ";
        }
*/
    }
};

int main(){
    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    Solution soln;

    soln.shuffle(nums, n);

    return 0;
}
