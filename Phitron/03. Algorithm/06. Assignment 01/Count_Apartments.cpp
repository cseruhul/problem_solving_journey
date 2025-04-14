#include <bits/stdc++.h>
using namespace std;

int r, c;
char building_map[1005][1005];
bool visited[1005][1005];

vector<pair<int, int>> direction_of_move = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int R, int C)
{
    if (R < 0 or R >= r or C < 0 or C >= c)
        return false;

    return true;
}

void dfs(int sr, int sc)
{
    visited[sr][sc] = true;
    for (int i = 0; i < 4; i++)
    {
        int cr = sr + direction_of_move[i].first;
        int cc = sc + direction_of_move[i].second;

        if (is_valid(cr, cc) and !visited[cr][cc] and (building_map[cr][cc] == '.'))
            dfs(cr, cc);
    }
}

int main()
{
    int dr, dc, no_of_apartment = 0;
    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> building_map[i][j];
        }
    }

    memset(visited, false, sizeof(visited));

    // for (int i = 0; i < r; i++)
    // {
    //     for (int j = 0; j < c; j++)
    //     {
    //         cout << building_map[i][j];
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (building_map[i][j] == '.' and visited[i][j] == false)
            {
                no_of_apartment++;
                dfs(i, j);
            }
        }
    }

    cout << no_of_apartment << endl;

    return 0;
}
