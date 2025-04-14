#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> answer;

    void helper(vector<int> &nums, int i, vector<int> temp) {
        if (i == nums.size()) {
            answer.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        helper(nums, i + 1, temp);
        temp.pop_back();

        helper(nums, i + 1, temp);
    }

    vector<vector<int>> subsets(vector<int> &nums) {
        vector<int> temp;
        helper(nums, 0, temp);
        return answer;
    }
};

int main() {
    vector<int> nums{1, 2, 3};
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