#include <bits/stdc++.h>
using namespace std;
/*In this problem to calculate the product of array except self. We cannot use the division operation.*/
class Solution {
  public:
    vector<int> productOfArrayExceptSelf(vector<int> &nums) {
        vector<int> leftProduct(nums.size());
        vector<int> rightProduct(nums.size());
        vector<int> answer(nums.size());

        leftProduct[0] = 1;
        rightProduct[nums.size() - 1] = 1;

        for (int i = 1; i < leftProduct.size(); i++) {
            leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
        }

        for (int i = nums.size() - 2; i >= 0; i--) {
            rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < nums.size(); i++) {
            answer[i] = leftProduct[i] * rightProduct[i];
        }

        return answer;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> answer;
    Solution obj;
    answer = obj.productOfArrayExceptSelf(nums);
    for (auto item : answer) {
        cout << item << " ";
    }
    return 0;
}
