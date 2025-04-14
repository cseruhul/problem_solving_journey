#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool searchWord(vector<vector<char>> &board, string word, int k, int row, int col, int r, int c) {
        // Base case
        if (k == word.size()) {
            return true;
        }

        // Boundary case
        if (r < 0 || c < 0 || r == row || c == col || word[k] != board[r][c]) {
            return false;
        }

        // For makring as visited Cells
        char ch = board[r][c];
        board[r][c] = '*';

        bool leftSearch = searchWord(board, word, k + 1, row, col, r, c - 1);
        bool bottomSearch = searchWord(board, word, k + 1, row, col, r + 1, c);
        bool rightSearch = searchWord(board, word, k + 1, row, col, r, c + 1);
        bool topSearch = searchWord(board, word, k + 1, row, col, r - 1, c);

        // Restore our main board to visited cells.
        board[r][c] = ch;

        return leftSearch || bottomSearch || rightSearch || topSearch;
    }

    bool exist(vector<vector<char>> &board, string word) {
        int row, col, r, c;
        row = board.size();
        col = board[0].size();

        for (r = 0; r < row; r++) {
            for (c = 0; c < col; c++) {
                if (board[r][c] == word[0]) {
                    if (searchWord(board, word, 0, row, col, r, c)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

int main() {
    vector<vector<char>> board{
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};
    string word = "ABCT";
    Solution obj;

    cout << obj.exist(board, word);

    return 0;
}