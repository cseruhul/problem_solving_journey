#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
vector<vector<int>> level;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level.push_back({src});

    while (!q.empty())
    {
        int n = q.size();
        vector<int> lvl;

        for (int i = 0; i < n; i++)
        {
            int parent = q.front();
            q.pop();

            for (auto child : adj_list[parent])
            {
                if (!visited[child])
                {
                    visited[child] = true;
                    lvl.push_back(child);
                    q.push(child);
                }
            }
        }

        if (!lvl.empty())
        {
            sort(lvl.begin(), lvl.end(), greater<int>());
            level.push_back(lvl);
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int u, v;
        cin >> u >> v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    memset(visited, false, sizeof(visited));
    bfs(0);

    int q;
    cin >> q;
    for (auto child : level[q])
        cout << child << " ";

    return 0;
}