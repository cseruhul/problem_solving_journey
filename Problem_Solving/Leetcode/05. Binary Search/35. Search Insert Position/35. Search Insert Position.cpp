#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int searchInsert(vector<int> &nums, int target) {
        int left = 0, right = nums.size() - 1, mid, answer = nums.size();

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                answer = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return answer;
    }
};

int main() {
    vector<int> nums{1, 3, 5, 6};
    int target = 5;
    Solution obj;

    cout << obj.searchInsert(nums, target);

    return 0;
}