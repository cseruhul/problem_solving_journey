#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> nextGreaterElements(vector<int> &nums) {
        stack<int> greaterElement;
        int n;
        n = nums.size();
        vector<int> answer(n);

        for (int i = n * 2 - 1; i >= 0; i--) {
            while (!greaterElement.empty() && greaterElement.top() <= nums[i % n]) {
                greaterElement.pop();
            }

            int number = (greaterElement.empty()) ? -1 : greaterElement.top();
            greaterElement.push(nums[i % n]);
            answer[i % n] = number;
        }

        return answer;
    }
};

int main() {
    // vector<int> nums{1, 2, 3, 4, 3};
    vector<int> nums{1, 8, -1, -100, -1, 222, 1111111, -111111};
    // vector<int> nums{1, 2, 1};
    vector<int> ans;

    Solution obj;
    ans = obj.nextGreaterElements(nums);

    for (auto item : ans) {
        cout << item << " ";
    }

    return 0;
}