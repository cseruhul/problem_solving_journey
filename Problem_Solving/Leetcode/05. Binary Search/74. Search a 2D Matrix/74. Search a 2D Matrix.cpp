#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int left = 0;
        int right = matrix.size() * matrix[0].size() - 1;
        int mid, row, col;

        while (left <= right) {
            mid = left + (right - left) / 2;
            row = mid / matrix[0].size();
            col = mid % matrix[0].size();
            if (matrix[row][col] == target) {
                return true;
            }
            if (matrix[row][col] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return false;
    }
};

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    Solution obj;
    cout << obj.searchMatrix(matrix, target);
    return 0;
}