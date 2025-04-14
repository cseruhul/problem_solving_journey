#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int searchInRotatedSortedArray(vector<int> &nums, int k) {
        int left, right, mid;
        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            mid = left + (right - left) / 2;
            cout << left << " " << mid << " " << right << endl;
            if (nums[mid] == k)
                return mid;
            if (nums[left] <= nums[mid]) {
                if ((k >= nums[left]) && (k < nums[mid])) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if ((k > nums[mid]) && (k <= nums[right])) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2, 3};
    int target = 0;

    Solution obj;

    cout << obj.searchInRotatedSortedArray(nums, target);

    return 0;
}