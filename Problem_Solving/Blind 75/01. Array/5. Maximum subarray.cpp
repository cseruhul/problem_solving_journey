/*
    Given an integer array nums, find the subarray with the largest sum, and return its sum.
    Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    Output: 6
    Explanation: The subarray [4,-1,2,1] has the largest sum 6.

    Input: nums = [1]
    Output: 1
    Explanation: The subarray [1] has the largest sum of 1.
*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maximumSubArray(vector<int> &nums) {
        int max = INT_MIN, sum = 0, i = 0;

        while (i < nums.size()) {
            sum += nums[i];
            max = (sum > max) ? sum : max;
            sum = (sum < 0) ? 0 : sum;
            i++;
        }

        return max;
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    Solution obj;

    cout << obj.maximumSubArray(nums);
    return 0;
}