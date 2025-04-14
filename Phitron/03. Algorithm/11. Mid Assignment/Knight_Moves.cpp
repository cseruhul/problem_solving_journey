#include <bits/stdc++.h>
using namespace std;

int R, C;

char chees_board[105][105];
bool visited[105][105];
int level[105][105];
vector<pair<int, int>> k_moves = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};

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
        pair<int, int> parent = q.front();
        q.pop();
        int parent_r = parent.first;
        int parent_c = parent.second;

        for (int i = 0; i < 8; i++)
        {
            int child_r = parent_r + k_moves[i].first;
            int child_c = parent_c + k_moves[i].second;

            if (is_valid(child_r, child_c) && !visited[child_r][child_c])
            {
                q.push({child_r, child_c});
                visited[child_r][child_c] = true;
                level[child_r][child_c] = level[parent_r][parent_c] + 1;
            }
        }
    }
}

int main()
{
    int t, u1, v1, u2, v2;
    cin >> t;

    while (t--)
    {
        cin >> R >> C;

        cin >> u1 >> v1;
        cin >> u2 >> v2;

        memset(visited, false, sizeof(visited));
        memset(level, -1, sizeof(level));
        bfs(u1, v1);
        cout << level[u2][v2] << endl;
    }

    return 0;
}