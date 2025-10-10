#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    int R, C, changes_count = 0;
    ll matrix[105][105];
    bool visited[105][105];

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

            if (is_valid(dr, dc) && !visited[dr][dc])
            {
                if (abs(matrix[sr][sc] - matrix[dr][dc]) == 1)
                    dfs(dr, dc);
                else
                    changes_count++;
            }
        }
    }
    void solve()
    {
        int t;
        cin >> t;

        while (t--)
        {

            cin >> R >> C;
            changes_count = 0;

            for (int i = 0; i < R; i++)
            {
                for (int j = 0; j < C; j++)
                {
                    cin >> matrix[i][j];
                }
            }

            // for (int i = 0; i < R; i++)
            // {
            //     for (int j = 0; j < C; j++)
            //     {
            //         cout << matrix[i][j] << " ";
            //     }
            //     cout << endl;
            // }
            memset(visited, false, sizeof(visited));
            // dfs(0,0);
            for (int i = 0; i < R; i++)
            {
                for (int j = 0; j < C; j++)
                {
                    if (!visited[i][j])
                    {
                        dfs(i, j);
                    }
                }
            }

            for (int i = 1; i < R - 1; i++)
            {
                for (int j = 0; j < C; j++)
                {
                    if (matrix[i][j] != ((matrix[i - 1][j] + matrix[i + 1][j]) / 2))
                    {
                        changes_count++;
                    }
                }
            }

            for (int i = 0; i < R; i++)
            {
                for (int j = 1; j < C - 1; j++)
                {
                    if (matrix[i][j] != ((matrix[i][j - 1] + matrix[i][j + 1]) / 2))
                    {
                        changes_count++;
                    }
                }
            }
            cout << changes_count;
            cout << endl;
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}