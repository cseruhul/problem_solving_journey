#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int minEatingSpeed(vector<int> &piles, int h) {
        long long low = 1, high = *max_element(piles.begin(), piles.end()), mid,
                  answer;
        while (low <= high) {
            mid = low + (high - low) / 2;
            long long totalTime = findNeededTimePerHour(piles, mid);
            if (totalTime <= h) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return answer;
    }

    long long findNeededTimePerHour(vector<int> &piles, int speed) {
        long long ans = 0;
        for (auto banana : piles) {
            ans += (banana + speed - 1) / speed;
        }
        return ans;
    }
};

int main() {
    // vector<int> piles = {3, 6, 7, 11};
    // int h = 8;
    // vector<int> piles = {30, 11, 23, 4, 20};
    // int h = 5;
    vector<int> piles = {805306368, 805306368, 805306368};
    long long h = 1000000000;
    Solution obj;
    cout << obj.minEatingSpeed(piles, h) << endl;
    return 0;
}