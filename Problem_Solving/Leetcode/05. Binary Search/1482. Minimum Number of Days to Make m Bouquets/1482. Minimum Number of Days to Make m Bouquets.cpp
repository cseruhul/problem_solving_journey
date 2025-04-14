#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minDays(vector<int> &bloomDay, int m, int k) {
        int first_day = 1,
            last_day = *max_element(bloomDay.begin(), bloomDay.end()), mid,
            min_day = -1;

        while (first_day <= last_day) {
            mid = first_day + (last_day - first_day) / 2;

            if (countBoquets(bloomDay, mid, k) >= m) {
                min_day = mid;
                last_day = mid - 1;
            } else {
                first_day = mid + 1;
            }
        }

        return min_day;
    }

    int countBoquets(vector<int> &bloomDay, int mid, int k) {
        int consecutive_count = 0;
        int boque_count = 0;

        for (auto noOfDate : bloomDay) {
            if (noOfDate <= mid) {
                consecutive_count++;
            } else {
                consecutive_count = 0;
            }

            if (consecutive_count == k) {
                boque_count++;
                consecutive_count = 0;
            }
        }

        return boque_count;
    }
};

int main() {
    // vector<int> bloomDay = {1, 10, 3, 10, 2};
    // int m = 3, k = 1;
    vector<int> bloomDay = {1, 10, 3, 10, 2};
    int m = 3, k = 2;
    Solution obj;

    cout << obj.minDays(bloomDay, m, k) << endl;
    return 0;
}