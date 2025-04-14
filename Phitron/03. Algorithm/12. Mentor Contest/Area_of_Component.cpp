#include <bits/stdc++.h>
using namespace std;

int R, C, component;
char adj_mat[1005][1005];
bool visited[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 or r >= R or c < 0 or c >= C)
        return false;

    return true;
}

void dfs(int sr, int sc)
{
    visited[sr][sc] = true;
    component++;

    for (int i = 0; i < 4; i++)
    {
        int cr = sr + d[i].first;
        int cc = sc + d[i].second;

        if (is_valid(cr, cc) and !visited[cr][cc] and adj_mat[cr][cc] == '.')
        {
            dfs(cr, cc);
        }
    }
}

int main()
{
    int min_component = INT_MAX;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> adj_mat[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (!visited[i][j] and adj_mat[i][j] == '.')
            {
                component = 0;
                dfs(i, j);
                min_component = min(component, min_component);
            }
        }
    }

    if (component == 0)
        cout << -1;
    else
        cout << min_component;

    return 0;
}
