#include <bits/stdc++.h>
using namespace std;

int R, C;

char kingdom[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool isValid(int r, int c)
{
    if (r < 0 or r >= R or c < 0 or c >= C)
        return false;

    return true;
}

void dfs(int sr, int sc)
{
    visited[sr][sc] = true;

    for (auto child : direction)
    {
        int dr = sr + child.first;
        int dc = sc + child.second;

        if (isValid(dr, dc) and !visited[dr][dc] and kingdom[dr][dc] == '.')
        {
            dfs(dr, dc);
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
            cin >> kingdom[i][j];
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

    memset(visited, false, sizeof(visited));

    int sr, sc, dr, dc;

    cin >> sr >> sc >> dr >> dc;

    dfs(sr, sc);

    if (visited[dr][dc])
        cout << "YES";
    else
        cout << "NO";

    // cout << "\nafter\n";

    // for (int i = 0; i < R; i++)
    // {
    //     for (int j = 0; j < C; j++)
    //     {
    //         cout << visited[i][j];
    //     }
    //     cout << endl;
    // }

    return 0;
}