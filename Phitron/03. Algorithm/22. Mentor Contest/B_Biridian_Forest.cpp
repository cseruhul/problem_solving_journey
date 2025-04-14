#include <bits/stdc++.h>
using namespace std;

int R, C;
char grid[1005][1005];
bool visited[1005][1005];
int depth[1005][1005];

vector<pair<int, int>> direction = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 or r >= R or c < 0 or c >= C)
        return false;

    return true;
}

void bfs(int src_r, int src_c, int dest_r, int dest_c)
{
    queue<pair<int, int>> q;
    q.push({src_r, src_c});
    visited[src_r][src_c] = true;

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

            if (is_valid(child_r, child_c) and !visited[child_r][child_c] and (grid[child_r][child_c] >= '0' and grid[child_r][child_c] <= '9' or grid[child_r][child_c] == 'E' or grid[child_r][child_c] == 'S'))
            {
                q.push({child_r, child_c});
                visited[child_r][child_c] = true;
                depth[child_r][child_c] = depth[par_r][par_c] + 1;
            }
        }

        if (par_r == dest_r and par_c == dest_c)
            return;
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
            char ch;
            cin >> ch;

            grid[i][j] = ch;

            if (ch == 'E')
            {
                dest_r = i;
                dest_c = j;
            }
            if (ch == 'S')
            {
                src_r = i;
                src_c = j;
            }
        }
    }

    bfs(src_r, src_c, dest_r, dest_c);

    int my_dist = depth[dest_r][dest_c];

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (grid[i][j] > '0' and grid[i][j] <= '9')
            {

                memset(visited, false, sizeof(visited));
                memset(depth, 0, sizeof(depth));

                bfs(i, j, dest_r, dest_c);

                if (depth[dest_r][dest_c] <= my_dist and depth[dest_r][dest_c] != 0)
                {
                    ans += grid[i][j] - '0';
                }
            }
        }
    }

    cout << ans;

    return 0;
}