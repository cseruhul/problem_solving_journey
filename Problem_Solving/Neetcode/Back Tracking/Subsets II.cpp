#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> answer;

    void helperSubsetsWithDup(vector<int> &nums, int i, vector<int> temp) {
        if (i == nums.size()) {
            answer.push_back(temp);
            return;
        } else {
            temp.push_back(nums[i]);
            helperSubsetsWithDup(nums, i + 1, temp);
            temp.pop_back();

            while (i + 1 < nums.size() && nums[i] == nums[i + 1])
                i++;
            helperSubsetsWithDup(nums, i + 1, temp);
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        helperSubsetsWithDup(nums, 0, temp);
        return answer;
    }
};

int main() {
    vector<int> nums{1, 2, 1};
    vector<vector<int>> answer;
    Solution obj;

    answer = obj.subsetsWithDup(nums);

    for (auto items : answer) {
        for (auto item : items) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}