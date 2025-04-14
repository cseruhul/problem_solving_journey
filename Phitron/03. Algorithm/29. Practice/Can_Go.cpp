#include <bits/stdc++.h>
using namespace std;

int R, C;
char room_map[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
        return false;

    return true;
}

void dfs(int sr, int sc)
{
    visited[sr][sc] = true;

    for (auto child : d)
    {
        int dr = sr + child.first;
        int dc = sc + child.second;

        if (is_valid(dr, sc) && !visited[dr][dc] && (room_map[dr][dc] == 'A' || room_map[dr][dc] == 'B' || room_map[dr][dc] == '.'))
        {
            dfs(dr, dc);
        }
    }
}

int main()
{
    int sr, sc, dr, dc;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> room_map[i][j];

            if (room_map[i][j] == 'A')
            {
                sr = i;
                sc = j;
            }

            if (room_map[i][j] == 'B')
            {
                dr = i;
                dc = j;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    dfs(sr, sc);
    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << visited[i][j];
    //     }
    //     cout << endl;
    // }

    if (visited[dr][dc])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}