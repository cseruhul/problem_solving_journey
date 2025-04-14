#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> ans;
    void helpserOfSubset(vector<int> &nums, int i, vector<int> &temp) {
        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        helpserOfSubset(nums, i + 1, temp);
        temp.pop_back();
        helpserOfSubset(nums, i + 1, temp);
    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> temp;
        helpserOfSubset(nums, 0, temp);
        return ans;
    }
};

int main() {
    // vector<int> nums = {1, 2, 3};
    vector<int> nums = {1};
    vector<vector<int>> answer;
    Solution obj;
    answer = obj.subsets(nums);

    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}