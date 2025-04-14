#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int result;
    int nonObstacle;
    int row;
    int col;
    vector<vector<int>> directions{{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    void helper(vector<vector<int>> &grid, int count, int r, int c) {
        // Bound Case
        if (r < 0 || r >= row || c < 0 || c >= col || grid[r][c] == -1) {
            return;
        }

        // Base case
        if (grid[r][c] == 2) {
            if (nonObstacle == count) {
                result++;
            }
            return;
        }

        grid[r][c] = -1;

        for (vector<int> &item : directions) {
            int new_r = r + item[0];
            int new_c = c + item[1];
            helper(grid, count + 1, new_r, new_c);
        }

        grid[r][c] = 0;
    }

    int uniquePathsIII(vector<vector<int>> &grid) {
        result = 0;
        nonObstacle = 0;
        row = grid.size();
        col = grid[0].size();

        int new_row, new_col, count = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 0) {
                    nonObstacle++;
                }
                if (grid[i][j] == 1) {
                    new_row = i;
                    new_col = j;
                }
            }
        }
        nonObstacle++;
        helper(grid, count, new_row, new_col);
        cout << result << endl;
        return result;
    }
};

int main() {
    vector<vector<int>> grid{{1, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 2}};

    Solution obj;

    cout << obj.uniquePathsIII(grid);

    return 0;
}