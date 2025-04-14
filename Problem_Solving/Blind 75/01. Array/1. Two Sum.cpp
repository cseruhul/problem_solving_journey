#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> twoSum(vector<int> &nums, int k) {
        unordered_map<int, int> map;
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (map.find(k - nums[i]) != map.end()) {
                ans.push_back(map[k - nums[i]]);
                ans.push_back(i);
            } else {
                map[nums[i]] = i;
            }
        }

        return ans;
    };
};
int main() {
    vector<int> nums = {2, 7, 11, 1};
    vector<int> ans;
    int k = 9;

    Solution obj;
    ans = obj.twoSum(nums, k);

    for (auto item : ans) {
        cout << item << " ";
    }
    return 0;
}