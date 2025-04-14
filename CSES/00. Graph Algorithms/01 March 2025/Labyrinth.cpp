#include <bits/stdc++.h>
using namespace std;

int R, C;
char labyrinth[1005][1005];
int level[1005][1005];
bool visited[1005][1005];
pair<int, int> parent[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool is_valid(int r, int c)
{
    if (r < 0 || r >= R || c < 0 || c >= C)
    {
        return false;
    }

    return true;
}

void bfs(int r, int c)
{
    queue<pair<int, int>> q;
    q.push({r, c});
    visited[r][c] = true;
    parent[r][c] = {-1, -1};

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int pr = par.first;
        int pc = par.second;

        for (auto child : d)
        {
            int cr = pr + child.first;
            int cc = pc + child.second;

            if (is_valid(cr, cc) && !visited[cr][cc] && (labyrinth[cr][cc] == '.' || labyrinth[cr][cc] == 'A' || labyrinth[cr][cc] == 'B'))
            {
                q.push({cr, cc});
                visited[cr][cc] = true;
                level[cr][cc] = level[pr][pc] + 1;
                parent[cr][cc] = {pr, pc};
            }
        }
    }
}

int main()
{
    int sr, sc, dr, dc, pr, pc, cr, cc;
    cin >> R >> C;

    for (int r = 0; r < R; r++)
    {
        for (int c = 0; c < C; c++)
        {
            cin >> labyrinth[r][c];
            if (labyrinth[r][c] == 'A')
            {
                sr = r;
                sc = c;
            }

            if (labyrinth[r][c] == 'B')
            {
                dr = r;
                dc = c;
            }
        }
    }

    memset(visited, false, sizeof(visited));
    memset(level, 0, sizeof(level));
    string ans;

    bfs(sr, sc);

    if (visited[dr][dc])
    {
        cr = dr;
        cc = dc;

        while (1)
        {
            if (labyrinth[cr][cc] == 'A')
            {
                break;
            }

            auto par = parent[cr][cc];
            pr = par.first;
            pc = par.second;

            int r = pr - cr, c = pc - cc;

            if (r == 0 and c == -1)
                ans.push_back('R');
            else if (r == 0 and c == 1)
                ans.push_back('L');
            else if (r == 1 and c == 0)
                ans.push_back('U');
            else if (r == -1 and c == 0)
                ans.push_back('D');

            cr = pr;
            cc = pc;
        }
        reverse(ans.begin(), ans.end());

        cout << "YES" << endl;
        cout << level[dr][dc] << endl;
        cout << ans;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}