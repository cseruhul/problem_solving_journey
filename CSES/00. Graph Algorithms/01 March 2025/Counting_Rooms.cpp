#include <bits/stdc++.h>
using namespace std;

int R, C;

char building_map[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
        return false;

    return true;
}

void dfs(int r, int c)
{
    visited[r][c] = true;

    for (auto child : d)
    {
        int child_r = r + child.first;
        int child_c = c + child.second;

        if (is_valid(child_r, child_c) and !visited[child_r][child_c] and building_map[child_r][child_c] == '.')
        {
            dfs(child_r, child_c);
        }
    }
}

int main()
{
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> building_map[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
    int room = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (building_map[i][j] == '.' and !visited[i][j])
            {
                room++;
                dfs(i, j);
            }
        }
    }

    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << visited[i][j];
    //     }
    //     cout << endl;
    // }

    cout << room << endl;

    return 0;
}