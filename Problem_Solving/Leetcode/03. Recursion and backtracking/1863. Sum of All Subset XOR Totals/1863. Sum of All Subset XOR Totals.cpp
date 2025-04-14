#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int total = 0;

    void helper(vector<int> &nums, int i, int tempXOR) {
        if (i == nums.size()) {
            total += tempXOR;
            return;
        }

        tempXOR = tempXOR ^ nums[i];
        helper(nums, i + 1, tempXOR);
        tempXOR = tempXOR ^ nums[i];
        helper(nums, i + 1, tempXOR);
    }
    int subsetXORSum(vector<int> &nums) {
        int tempXOR = 0;
        helper(nums, 0, tempXOR);
        return total;
    }
};

int main() {
    // vector<int> nums{1, 3};
    vector<int> nums{5, 1, 6};
    Solution obj;

    cout << obj.subsetXORSum(nums) << endl;
    return 0;
}