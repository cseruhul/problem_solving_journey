#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMinimum(vector<int> &nums) {
        int left, right, mid, answer;
        left = 0;
        right = nums.size() - 1;
        while (left <= right) {
            mid = left + (right - left) / 2;
            cout << left << " " << mid << " " << right << endl;

            if (nums[mid] < nums[mid - 1])
                return nums[mid];
            else if (nums[mid] < nums[right]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
    }
};
int main() {
    // vector<int> nums{5, 1, 2, 3, 4};
    // vector<int> nums{3, 4, 5, 1, 2};
    vector<int> nums{2, 3, 4, 5, 1};
    Solution obj;
    cout << "\n"
         << obj.findMinimum(nums);

    return 0;
}