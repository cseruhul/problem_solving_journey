#include <bits/stdc++.h>


using namespace std;

class UnionFind {
public:
    vector<int> parent;
    vector<int> rank;

    UnionFind(int size) {
        parent.resize(size);
        rank.resize(size, 1);
        for (int i = 0; i < size; ++i) {
            parent[i] = i;
        }
    }

    int find(int p) {
        if (parent[p] != p) {
            parent[p] = find(parent[p]);  // Path compression
        }
        return parent[p];
    }

    void unionSets(int p, int q) {
        int rootP = find(p);
        int rootQ = find(q);
        if (rootP != rootQ) {
            if (rank[rootP] > rank[rootQ]) {
                parent[rootQ] = rootP;
            } else if (rank[rootP] < rank[rootQ]) {
                parent[rootP] = rootQ;
            } else {
                parent[rootQ] = rootP;
                rank[rootP]++;
            }
        }
    }
};

class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int mainRow = grid.size();
        int mainCol = grid[0].size();
        UnionFind uf(mainRow * mainCol);

        auto pos = [&](int row, int col) {
            return row * mainCol + col;
        };

        // Step 1: Union adjacent land cells
        for (int row = 0; row < mainRow; ++row) {
            for (int col = 0; col < mainCol; ++col) {
                if (grid[row][col] == 1) {
                    if (col + 1 < mainCol && grid[row][col + 1] == 1) {
                        uf.unionSets(pos(row, col), pos(row, col + 1));
                    }
                    if (row + 1 < mainRow && grid[row + 1][col] == 1) {
                        uf.unionSets(pos(row, col), pos(row + 1, col));
                    }
                }
            }
        }

        // Step 2: Mark boundary-connected components
        unordered_set<int> boundaryConnected;
        for (int row = 0; row < mainRow; ++row) {
            for (int col = 0; col < mainCol; ++col) {
                if (grid[row][col] == 1 &&
                    (row == 0 || row == mainRow - 1 || col == 0 || col == mainCol - 1)) {
                    boundaryConnected.insert(uf.find(pos(row, col)));
                }
            }
        }

        // Step 3: Count enclaves
        int enclaveCount = 0;
        for (int row = 0; row < mainRow; ++row) {
            for (int col = 0; col < mainCol; ++col) {
                if (grid[row][col] == 1 && boundaryConnected.find(uf.find(pos(row, col))) == boundaryConnected.end()) {
                    enclaveCount++;
                }
            }
        }

        return enclaveCount;
    }
};

int main() {
    vector<vector<int>> grid = {
        {0, 0, 0, 0},
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 0}
    };

    Solution sol;
    int result = sol.numEnclaves(grid);

    cout << "Number of enclaves: " << result << endl;

    return 0;
}
