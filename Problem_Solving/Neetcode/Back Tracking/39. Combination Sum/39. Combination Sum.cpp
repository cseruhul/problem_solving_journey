#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> answer;

    void helper(vector<int> &nums, int target, int index, int tempSum, vector<int> temp) {
        if (tempSum > target) {
            return;
        }
        if (index == nums.size()) {
            if (target == tempSum) {
                answer.push_back(temp);
            }
            return;
        }

        tempSum += nums[index];
        temp.push_back(nums[index]);
        helper(nums, target, index, tempSum, temp);
        temp.pop_back();
        tempSum -= nums[index];

        helper(nums, target, index + 1, tempSum, temp);
    }
    vector<vector<int>> combinationSum(vector<int> &nums, int target) {
        vector<int> temp;
        helper(nums, target, 0, 0, temp);
        return answer;
    }
};

int main() {
    // vector<int> nums = {3, 4, 5};
    // int target = 16;
    vector<int> nums = {2, 5, 6, 9};
    int target = 9;
    Solution obj;
    vector<vector<int>> answer;

    answer = obj.combinationSum(nums, target);
    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
Input:
nums = [3,4,5]
target = 16

Output: [[3,3,3,3,4],[3,3,5,5],[4,4,4,4],[3,4,4,5]]

*/