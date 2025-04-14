#include <bits/stdc++.h>
using namespace std;
int n, m;
char grid[1005][1005];
int si, sj;
int di, dj;
bool vis_arr[1005][1005];
int level[1005][1005];
pair<char, char> parent[1005][1005];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis_arr[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> pir = q.front();
        q.pop();
        int pir_i = pir.first;
        int pir_j = pir.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = pir_i + v[i].first;
            int cj = pir_j + v[i].second;
            if (valid(ci, cj) && !vis_arr[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'R' || grid[ci][cj] == 'D'))
            {
                q.push({ci, cj});
                vis_arr[ci][cj] = true;
                level[ci][cj] = level[pir_i][pir_j] + 1;
                parent[ci][cj] = {pir_i, pir_j};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis_arr, false, sizeof(vis_arr));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);
    int x = di;
    int y = dj;
    while (1)
    {
        pair<int, int> pir = parent[x][y];
        x = pir.first;
        y = pir.second;
        if (grid[x][y] == 'R' || (x == -1 && y == -1))
        {
            break;
        }
        grid[x][y] = 'X';
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}