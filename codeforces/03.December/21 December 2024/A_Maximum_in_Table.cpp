#include <bits/stdc++.h>
using namespace std;

int max_on_table(int row, int col)
{
    if (row == 1 || col == 1)
        return 1;

    return max_on_table(row - 1, col) + max_on_table(row, col - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << max_on_table(n, n);

    // vector<vector<int>> table(n + 1, vector<int>(n + 1));

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (i == 1 || j == 1)
    //         {
    //             table[i][j] = 1;
    //         }
    //         else
    //         {
    //             table[i][j] = table[i - 1][j] + table[i][j - 1];
    //         }
    //     }
    // }

    // cout << table[n][n] << endl;

    return 0;
}