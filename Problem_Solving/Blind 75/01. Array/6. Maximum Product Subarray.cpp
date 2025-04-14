#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProductSubarray(vector<int> &nums) {
        int maxPro = 1, product = 1, i = 0;

        while (i < nums.size()) {
            product *= nums[i];
            maxPro = (maxPro > product) ? maxPro : product;
            product = (product < 0) ? 1 : product;
            i++;
        }

        return maxPro;
    }
};
int main() {
    vector<int> nums = {2, 3, -2, 4};
    Solution obj;
    cout << obj.maxProductSubarray(nums);
    return 0;
}