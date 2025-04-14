class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int a = grid.size() - 2;
        vector<vector<int>> ans;

        int row, col, n1, n2, n3, nn;

        for(row = 0; row < grid.size() - 2; row++){
            vector<int> temp;
            for(col = 0; col < grid[col].size() - 2; col++){
                n1 = max({grid[row + 0][col + 0], grid[row + 0][col + 1], grid[row + 0][col + 2]});
                n2 = max({grid[row + 1][col + 0], grid[row + 1][col + 1], grid[row + 1][col + 2]});
                n3 = max({grid[row + 2][col + 0], grid[row + 2][col + 1], grid[row + 2][col + 2]});

                nn = max({n1, n2, n3});

                temp.push_back(nn);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};
