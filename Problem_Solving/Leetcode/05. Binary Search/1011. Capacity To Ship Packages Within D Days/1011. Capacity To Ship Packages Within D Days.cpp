#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int shipWithinDays(vector<int> &weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int mid, answer = 0;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (dayCalculation(weights, mid) <= days) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }

    int dayCalculation(vector<int> &weights, int capacity) {
        int dayCount = 1;
        int loaded = 0;

        for (auto weight : weights) {
            if (weight + loaded > capacity) {
                dayCount++;
                loaded = weight;
            } else {
                loaded += weight;
            }
        }

        return dayCount;
    }
};

int main() {
    // vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // int days = 5;
    // vector<int> weights = {3, 2, 2, 4, 1, 4};
    // int days = 3;
    vector<int> weights = {1, 2, 3, 1, 1};
    int days = 4;

    Solution obj;

    cout << obj.shipWithinDays(weights, days);

    return 0;
}