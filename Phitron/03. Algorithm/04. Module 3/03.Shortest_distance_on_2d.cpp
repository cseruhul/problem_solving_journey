#include <bits/stdc++.h>
using namespace std;

int m, n;
char grid[105][105];
bool visited[105][105];
int dist[105][105];

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int r, int c)
{
    if (r < 0 or r >= m or c < 0 or c >= n)
        return false;

    return true;
}

void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});

    visited[sr][sc] = true;
    dist[sr][sc] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_r = par.first;
        int par_c = par.second;

        cout << grid[par_r][par_c] << " ";

        for (int i = 0; i < 4; i++)
        {
            int child_r = par_r + d[i].first;
            int child_c = par_c + d[i].second;

            if (is_valid(child_r, child_c) and !visited[child_r][child_c])
            {
                visited[child_r][child_c] = true;
                dist[child_r][child_c] = dist[par_r][par_c] + 1;
                q.push({child_r, child_c});
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
        }
    }

    memset(visited, false, sizeof(visited));
    memset(dist, 0, sizeof(dist));

    int sr, sc, dr, dc;

    cin >> sr >> sc >> dr >> dc;

    bfs(sr, sc);
    cout << endl;
    cout << dist[dr][dc] << endl;

    return 0;
}