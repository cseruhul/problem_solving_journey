/*

00 01 02 03 04
01 02 03 04 05
02 03 04 05 06

*/
#include <bits/stdc++.h>
using namespace std;

int r, c;
char grid[105][105];
bool visited[105][105];

vector<pair<int, int>> direction = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool is_valid(int R, int C)
{
    if (R < 0 or R >= r or C < 0 or C >= c)
    {
        return false;
    }

    return true;
}

void bfs_on_2d(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});

    visited[sr][sc] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int parent_r = parent.first;
        int parent_c = parent.second;

        cout << grid[parent_r][parent_c] << " ";

        for (int i = 0; i < 4; i++)
        {
            int child_r = parent_r + direction[i].first;
            int child_c = parent_c + direction[i].second;

            if (is_valid(child_r, child_c) and !visited[child_r][child_c])
            {
                visited[child_r][child_c] = true;
                q.push({child_r, child_c});
            }
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

    memset(visited, false, sizeof(visited));

    int sr, sc;
    cin >> sr >> sc;

    bfs_on_2d(sr, sc);

    return 0;
}