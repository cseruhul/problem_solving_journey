#include <bits/stdc++.h>
using namespace std;

int R, C;

char maze[1005][1005];
bool visited[1005][1005];
int level[1005][1005];

pair<int, int> parent[1005][1005];

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 or r >= R or c < 0 or c >= C)
        return false;

    return true;
}

void bfs(int sr, int sc)
{
    queue<pair<int, int>> q;
    q.push({sr, sc});

    visited[sr][sc] = true;
    level[sr][sc] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int parent_r = par.first;
        int parent_c = par.second;

        for (int i = 0; i < 4; i++)
        {
            int child_r = parent_r + direction[i].first;
            int child_c = parent_c + direction[i].second;

            if (is_valid(child_r, child_c) && !visited[child_r][child_c] && (maze[child_r][child_c] == '.' || maze[child_r][child_c] == 'R' || maze[child_r][child_c] == 'D'))
            {
                q.push({child_r, child_c});
                visited[child_r][child_c] = true;
                level[child_r][child_c] = level[parent_r][parent_c] + 1;
                parent[child_r][child_c] = {parent_r, parent_c};
            }
        }
    }
}

int main()
{

    cin >> R >> C;

    int sr, sc, dr, dc;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> maze[i][j];
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (maze[i][j] == 'R')
            {
                sr = i;
                sc = j;
            }
            if (maze[i][j] == 'D')
            {
                dr = i;
                dc = j;
            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            parent[i][j] = {-1, -1};
        }
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    // memset(parent, -1, sizeof(parent));
    bfs(sr, sc);

    int x = dr, y = dc;
    // cout << sr << " " << sc << endl;
    // cout << x << " " << y << endl;

    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << "(" << parent[i][j].first << " " << parent[i][j].second << ") ";
    //     }
    //     cout << endl;
    // }

    while (1)
    {
        pair<int, int> par = parent[x][y];
        x = par.first;
        y = par.second;

        if (maze[x][y] == 'R' or (x == -1 and y == -1))
        {
            break;
        }
        maze[x][y] = 'X';
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }

    return 0;
}