#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int smallestDivisor(vector<int> &nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int answer = 0;
        int mid;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (sumOfDivision(nums, mid) <= threshold) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }

    int sumOfDivision(vector<int> &nums, int n) {
        int sum = 0;
        for (auto number : nums) {
            sum += (number + n - 1) / n;
        }
        return sum;
    }
};

int main() {
    // vector<int> nums{1, 2, 5, 9};
    // int threshold = 6;
    vector<int> nums{44, 22, 33, 11, 1};
    int threshold = 5;
    Solution obj;
    cout << obj.smallestDivisor(nums, threshold);
    return 0;
}