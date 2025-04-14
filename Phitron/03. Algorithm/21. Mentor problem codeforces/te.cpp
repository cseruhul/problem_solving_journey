#include <bits/stdc++.h>
using namespace std;

int R, C;
char grid[1005][1005];
int depth[1005][1005]; // Stores distance from 'E'
vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

// Multi-source BFS from 'E'
void bfs(int dest_r, int dest_c)
{
    queue<pair<int, int>> q;
    memset(depth, -1, sizeof(depth)); // -1 means unvisited

    q.push({dest_r, dest_c});
    depth[dest_r][dest_c] = 0;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int par_r = par.first;
        int par_c = par.second;

        for (auto child : direction)
        {
            int child_r = par_r + child.first;
            int child_c = par_c + child.second;

            if (child_r >= 0 && child_r < R && child_c >= 0 && child_c < C &&
                depth[child_r][child_c] == -1 && (grid[child_r][child_c] >= '0' && grid[child_r][child_c] <= '9' || grid[child_r][child_c] == 'S'))
            {

                q.push({child_r, child_c});
                depth[child_r][child_c] = depth[par_r][par_c] + 1;
            }
        }
    }
}

int main()
{
    int src_r, src_c, dest_r, dest_c, ans = 0;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> grid[i][j];

            if (grid[i][j] == 'E')
            {
                dest_r = i;
                dest_c = j;
            }
            if (grid[i][j] == 'S')
            {
                src_r = i;
                src_c = j;
            }
        }
    }

    bfs(dest_r, dest_c); // Compute shortest distances from 'E'

    int my_dist = depth[src_r][src_c];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (grid[i][j] > '0' && grid[i][j] <= '9' && depth[i][j] != -1 && depth[i][j] <= my_dist)
            {
                ans += grid[i][j] - '0';
            }
        }
    }

    cout << ans << endl;
    return 0;
}
