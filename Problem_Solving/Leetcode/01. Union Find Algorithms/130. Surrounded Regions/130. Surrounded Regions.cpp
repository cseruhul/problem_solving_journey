#include <bits/stdc++.h>
using namespace std;

class UnionFind {
public:
    vector<int> parent;
    vector<int> score;

public:
    UnionFind(int size) {
        parent.resize(size);
        score.resize(size, 1);
        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }
    }

public:
    int findRoot(int p) {

        while (parent[p] != p) {
            parent[p] = parent[parent[p]];
            p = parent[p];
        }

        return p;
    }

public:
    void Union(int p, int q) {
        int i = findRoot(p);
        int j = findRoot(q);

        if (i != j) {
            if (score[i] < score[j]) {
                parent[i] = j;
            } else if (score[i] > score[j]) {
                parent[j] = i;
            } else {
                parent[i] = j;
                score[j]++;
            }
        }
    }
};

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int mainRow = board.size();
        int mainCol = board[0].size();

        unordered_set<int> bordered_regions;

        UnionFind uf(mainRow * mainCol);

        auto position = [&](int row, int col) { return row * mainCol + col; };

        // Union of All O elements
        for (int row = 0; row < mainRow; row++) {
            for (int col = 0; col < mainCol; col++) {
                if (board[row][col] == 'O') {
                    if (((row + 1) < mainRow) && (board[row + 1][col] == 'O')) {
                        uf.Union(position(row, col), position(row + 1, col));
                    }
                    if (((col + 1) < mainCol) && (board[row][col + 1] == 'O')) {
                        uf.Union(position(row, col), position(row, col + 1));
                    }
                }
            }
        }

        // Finding Border Elements
        for (int row = 0; row < mainRow; row++) {
            for (int col = 0; col < mainCol; col++) {
                if ((board[row][col] == 'O') &&
                    (row * col == 0 || row == mainRow - 1 ||
                     col == mainCol - 1)) {
                    bordered_regions.insert(uf.findRoot(position(row, col)));
                }
            }
        }

        // Replacing All "O" s to "X"
        for (int row = 0; row < mainRow; row++) {
            for (int col = 0; col < mainCol; col++) {
                if ((board[row][col] == 'O') &&
                    (bordered_regions.find(uf.findRoot(position(row, col))) ==
                     bordered_regions.end())) {
                    board[row][col] = 'X';
                }
            }
        }
    }
};

int main() {
    /*vector<vector<char>> board{{'X'}};
    vector<vector<char>> board{{'X','X','X','X'},
{'X','O','O','X'},
{'X','X','O','X'},
{'X','O','X','X'}};*/
    vector<vector<char>> board{{'O', 'X', 'X', 'O', 'X'},
                               {'X', 'O', 'O', 'X', 'O'},
                               {'X', 'O', 'X', 'O', 'X'},
                               {'O', 'X', 'O', 'O', 'O'},
                               {'X', 'X', 'O', 'X', 'O'}};

    int i, j, mainRow, mainCol;
    mainRow = board.size();
    mainCol = board[0].size();

    for (i = 0; i < mainRow; i++) {
        for (j = 0; j < mainCol; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    Solution obj;
    obj.solve(board);
    for (i = 0; i < mainRow; i++) {
        for (j = 0; j < mainCol; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
