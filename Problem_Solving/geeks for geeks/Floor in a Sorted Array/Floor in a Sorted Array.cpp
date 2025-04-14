#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {
        long long left = 0, right = n - 1, mid, answer = -1;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (v[mid] <= x) {
                answer = mid;
                left = mid + 1;
            } else {
                right = right - 1;
            }
        }

        return answer;
    }
};

int main() {
    vector<long long> arr = {1, 2, 8, 10, 11, 12, 19};
    long long n = arr.size(), x = 5;
    Solution obj;
    cout << obj.findFloor(arr, n, x) << endl;
    return 0;
}