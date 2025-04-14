#include <bits/stdc++.h>
using namespace std;

/*Union Find Datastructure*/
class UnionFind {
public:
    vector<int> parent;
    vector<int> height;

public:
    UnionFind(vector<vector<int>>& grid) {
        int r, c, row, col;
        r = grid.size();
        c = grid[0].size();
        int i = 0;
        for (row = 0; row < r; row++) {
            for (col = 0; col < c; col++) {
                if (grid[row][col] == 1) {
                    parent.push_back(position(c, row, col));
                } else {
                    parent.push_back(-1);
                }
                height.push_back(1);
            }
        }
    }

public:
    void Union(int p, int q) {
        int i = findRoot(p);
        int j = findRoot(q);
        if (i != j) {
            if (height.at(i) < height.at(j)) {
                parent.at(i) = j;
            } else if (height.at(i) > height.at(j)) {
                parent.at(j) = i;
            } else {
                parent.at(i) = j;
                height.at(j) += height.at(i);
            }
        }
    }

public:
    int findRoot(int p) {
        if (parent[p] == -1)
            return -1;
        while (p != parent[p]) {
            parent.at(p) = parent.at(parent.at(p));
            p = parent[p];
        }
        return p;
    }

public:
    int position(int col, int r, int c) { return (col * r + c); }
};

class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int answer = 0;
        int r = grid.size();
        int c = grid[0].size();

        UnionFind uf(grid);
        for (int row = 0; row < r; row++) {
            for (int col = 0; col < c; col++) {
                if (grid[row][col] == 1) {
                    if ((col > 0) && (grid[row][col - 1] == 1)) {
                        uf.Union(uf.position(c, row, col),
                                 uf.position(c, row, col - 1));
                    }
                    if ((col < c - 1) && (grid[row][col + 1] == 1)) {
                        uf.Union(uf.position(c, row, col),
                                 uf.position(c, row, col + 1));
                    }
                    if ((row > 0) && (grid[row - 1][col] == 1)) {
                        uf.Union(uf.position(c, row, col),
                                 uf.position(c, row - 1, col));
                    }
                    if ((row < r - 1) && (grid[row + 1][col] == 1)) {
                        uf.Union(uf.position(c, row, col),
                                 uf.position(c, row + 1, col));
                    }
                }
            }
        }
        unordered_map<int, int> u_map;
        for (int i = 0; i < r * c; i++) {
            int er = uf.findRoot(i);
            if (er != -1) {
                u_map[er]++;
                if(u_map[er] > answer) answer = u_map[er];
            }
        }


        return answer;
    }
};

int main() {
    vector<vector<int>>grid = {
        {0,0,1,0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,1,1,0,1,0,0,0,0,0,0,0,0},
        {0,1,0,0,1,1,0,0,1,0,1,0,0},
        {0,1,0,0,1,1,0,0,1,1,1,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0},
        {0,0,0,0,0,0,0,1,1,1,0,0,0},
        {0,0,0,0,0,0,0,1,1,0,0,0,0}};
    /*vector<vector<int>>grid = {
        {0,1,0,0,1,0,0,1}};*/
    /*vector<vector<int>> grid = {
        {1, 1, 0, 0, 0}, {1, 1, 0, 0, 0}, {0, 0, 0, 1, 1}, {0, 0, 0, 1, 1}};*/
    int n;
    Solution solution;
    n = solution.maxAreaOfIsland(grid);

    cout << n;
    return 0;
}
