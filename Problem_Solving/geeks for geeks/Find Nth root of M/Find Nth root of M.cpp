#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int NthRoot(int n, int m) {
        int left = 1, mid, right = m;
        while (left <= right) {
            mid = left + (right - left) / 2;
            int midM = expFunction(n, mid, m);
            if (midM == 1) {
                return mid;
            } else if (midM == 2) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return -1;
    }

    int expFunction(int n, int mid, int m) {
        long long answer = 1;
        for (int i = 1; i <= n; i++) {
            answer = answer * mid;
            if (answer > m) return 2; // return 2 if answer > m
        }
        if (answer == m) return 1; // return 1 if answer == m
        return 0;                  // return 0 if answer < m
    }
};

int main() {
    int n = 4, m = 69;
    Solution obj;
    cout << obj.NthRoot(n, m);
    return 0;
}