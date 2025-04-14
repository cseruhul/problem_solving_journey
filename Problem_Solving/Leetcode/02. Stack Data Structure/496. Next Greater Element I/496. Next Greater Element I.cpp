#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        stack<int> greaterStack;
        unordered_map<int, int> greaterMap;
        vector<int> vectorAnswer;
        int n;
        n = nums2.size();

        for (int i = n - 1; i >= 0; i--) {
            while (!greaterStack.empty() && greaterStack.top() <= nums2[i]) {
                greaterStack.pop();
            }
            int number = (greaterStack.empty()) ? -1 : greaterStack.top();
            greaterStack.push(nums2[i]);
            greaterMap[nums2[i]] = number;
        }

        for (int i = 0; i < nums1.size(); i++) {
            vectorAnswer.push_back(greaterMap[nums1[i]]);
        }

        return vectorAnswer;
    }
};
int main() {
    // vector<int> nums1 = {4, 1, 2};
    // vector<int> nums2 = {1, 3, 4, 2};
    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> answer;

    Solution obj;

    answer = obj.nextGreaterElement(nums1, nums2);
    for (auto item : answer) {
        cout << item << " ";
    }

    return 0;
}