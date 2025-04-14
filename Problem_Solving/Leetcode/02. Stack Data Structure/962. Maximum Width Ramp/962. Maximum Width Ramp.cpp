#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxWidthRamp(vector<int> &nums) {
        int maxWidth = 0;
        stack<int> decreasingStack;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (decreasingStack.empty() || nums[decreasingStack.top()] > nums[i]) {
                decreasingStack.push(i);
            }
        }

        for (int j = n - 1; j >= 0; j--) {
            while (!decreasingStack.empty() && nums[j] >= nums[decreasingStack.top()]) {
                if ((j - decreasingStack.top()) > maxWidth) {
                    maxWidth = j - decreasingStack.top();
                }
                decreasingStack.pop();
            }
        }

        return maxWidth;
    }
};
int main() {
    vector<int> nums{9, 8, 1, 0, 1, 9, 4, 0, 4, 1};
    // vector<int> nums{6, 0, 8, 2, 1, 5};
    Solution obj;

    cout << obj.maxWidthRamp(nums);

    return 0;
}