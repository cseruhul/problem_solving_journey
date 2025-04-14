#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<string> ans;

    void helperOfFindPath(vector<vector<int>> &mat, int n, string path, int row, int col) {
        // cout << path << endl;
        // Bound case
        if (row < 0 || col < 0 || row >= n || col >= n || mat[row][col] != 1) return;

        // Base case
        if (row == n - 1 && col == n - 1) {
            ans.push_back(path);
            return;
        }

        mat[row][col] = -1;
        path += 'D';
        helperOfFindPath(mat, n, path, row + 1, col);
        path.pop_back();

        path += 'L';
        helperOfFindPath(mat, n, path, row, col - 1);
        path.pop_back();

        path += 'R';
        helperOfFindPath(mat, n, path, row, col + 1);
        path.pop_back();

        path += 'U';
        helperOfFindPath(mat, n, path, row - 1, col);
        path.pop_back();

        mat[row][col] = 1;
    }

    vector<string> findPath(vector<vector<int>> &mat) {
        int n;
        n = mat.size();
        helperOfFindPath(mat, n, "", 0, 0);

        return ans;
    }
};

int main() {
    vector<vector<int>> mat{
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> answer;

    Solution obj;

    answer = obj.findPath(mat);

    for (auto item : answer) {
        cout << item << endl;
    }

    return 0;
}