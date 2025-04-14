#include <bits/stdc++.h>
using namespace std;

int r, c;
char grid[105][105];
bool visited[105][105];

vector<pair<int, int>> direction{{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int r1, int c1)
{
    if ((r1 < 0 or r1 >= r) or (c1 < 0 or c1 >= c))
    {
        return false;
    }

    return true;
}

void dfs_search(int sr, int sc)
{
    // cout << sr << " " << sc << " = " << grid[sr][sc] << endl;
    cout << grid[sr][sc] << " ";

    visited[sr][sc] = true;

    for (int i = 0; i < 4; i++)
    {
        int cr = sr + direction[i].first;
        int cc = sc + direction[i].second;

        if (is_valid(cr, cc) == true and !visited[cr][cc])
        {
            dfs_search(cr, cc);
        }
    }
}

int main()
{
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> grid[i][j];
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << grid[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << endl;

    memset(visited, false, sizeof(visited));
    int si, sj;
    cin >> si >> sj;

    dfs_search(si, sj);

    return 0;
}