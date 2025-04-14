#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> answer;
    void helper(vector<int> &nums, int index) {
        // Base case
        if (index == nums.size()) {
            answer.push_back(nums);
            return;
        }

        // For backtracking and calling the recursive function we use a for loop.
        for (int j = index; j < nums.size(); j++) {
            swap(nums[j], nums[index]);
            // Recursion
            helper(nums, index + 1);
            // Backtracking
            swap(nums[j], nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int> &nums) {
        helper(nums, 0);
        return answer;
    }
};
int main() {
    vector<int> nums{1, 1, 2};
    vector<vector<int>> ans;

    Solution obj;

    ans = obj.permute(nums);

    for (auto items : ans) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}