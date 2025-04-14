#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int count_max = 0;
        int index = -1;

        for (int row = 0; row < arr.size(); row++) {
            int count_ones = arr[row].size() - lowerBound(arr[row], arr[row].size(), 1);
            if (count_ones > count_max) {
                count_max = count_ones;
                index = row;
            }
        }

        return index;
    }

    int lowerBound(vector<int> &arr, int n, int x) {
        int left = 0;
        int right = n - 1;
        int answer = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] >= x) {
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
    vector<vector<int>> arr = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}};
    Solution obj;
    cout << obj.rowWithMax1s(arr) << endl;
    return 0;
}