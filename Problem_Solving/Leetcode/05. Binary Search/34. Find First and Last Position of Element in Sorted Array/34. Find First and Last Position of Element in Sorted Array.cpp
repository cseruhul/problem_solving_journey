#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int lowerbound, upperbound, n = nums.size(), answer;
        lowerbound = lowerBound(nums, n, target);
        if (lowerbound == n || nums[lowerbound] != target) {
            return {-1, -1};
        } else {
            return {answer, upperBound(nums, n, target) - 1};
        }
    }

  private:
    int lowerBound(vector<int> &nums, int n, int target) {
        int left = 0, right = n - 1, mid, answer = -1;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return answer;
    }

    int upperBound(vector<int> &nums, int n, int target) {
        int left = 0, right = n - 1, mid, answer = n;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                answer = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return answer;
    }
};

int main() {
    vector<int> nums{5, 7, 7, 8, 8, 10}, answer;
    int target = 6;
    Solution obj;
    answer = obj.searchRange(nums, target);
    for (auto item : answer) {
        cout << item << " ";
    }

    return 0;
}