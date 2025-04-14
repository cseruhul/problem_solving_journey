#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int search(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums{-1, 0, 3, 5, 9, 12};
    int target = 9;
    Solution obj;

    cout << obj.search(nums, target);
    return 0;
}