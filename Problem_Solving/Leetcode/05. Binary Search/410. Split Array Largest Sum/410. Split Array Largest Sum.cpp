#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int splitArray(vector<int> &nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int answer = 0, mid;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (calculateNumberOfk(nums, mid) <= k) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }

    int calculateNumberOfk(vector<int> &nums, int capacity) {
        int kCount = 1;
        int numberSum = 0;

        for (auto number : nums) {
            if (numberSum + number > capacity) {
                kCount++;
                numberSum = number;
            } else {
                numberSum += number;
            }
        }
        return kCount;
    }
};

int main() {
    // vector<int> nums = {7, 2, 5, 10, 8};
    // int k = 2;
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    Solution obj;
    cout << obj.splitArray(nums, k);
    return 0;
}