#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMin(vector<int> &nums) {
        int left = 0, right = nums.size() - 1, mid, answer = INT_MAX;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                left++;
                right--;
                continue;
            }
            if (nums[left] <= nums[mid]) {
                answer = (nums[left] < answer) ? nums[left] : answer;
                left = mid + 1;
            } else {
                answer = (nums[mid] < answer) ? nums[mid] : answer;
                right = mid - 1;
            }
        }

        return answer;
    }
};
int main() {
    vector<int> nums = {2, 2, 2, 0, 1};
    Solution obj;
    cout << obj.findMin(nums) << endl;
    return 0;
}