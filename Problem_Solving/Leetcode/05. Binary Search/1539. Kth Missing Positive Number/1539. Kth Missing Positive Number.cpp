#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findKthPositive(vector<int> &arr, int k) {
        int left = 0;
        int right = arr.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] - mid - 1 < k) {
                left = mid + 1;
            } else
                right = mid;
        }

        return left + k;
    }
};

int main() {
    vector<int> arr{2, 3, 4, 7, 11};
    int k = 5;
    Solution obj;
    cout << obj.findKthPositive(arr, k) << endl;
    return 0;
}