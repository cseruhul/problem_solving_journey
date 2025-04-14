#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int i, n;
        n = nums.size();
        vector<int> ans;
        for(i = 0; i < n; i += 2){
            ans.insert(ans.end(), nums[i], nums[i + 1]);
        }
        return ans;
    }
};

int main(){
    vector<int> nums = {1,1,2,3};
    vector<int> ans;

    Solution soln;

    ans = soln.decompressRLElist(nums);

    for(auto item:ans)
        cout << item << " ";

    return 0;
}
