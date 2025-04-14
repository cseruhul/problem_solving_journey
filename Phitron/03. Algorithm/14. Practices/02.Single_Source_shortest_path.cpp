#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int level[105];
int parent[105];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parnt = q.front();
        q.pop();

        for (auto child : adj_list[parnt])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                level[child] = level[parnt] + 1;
                parent[child] = parnt;
            }
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

    /*
        bool visited[105];
        int level[105];
        int parent[105];
    */

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs(0);

    int dest;
    vector<int> ans;
    cin >> dest;

    int node = dest;
    while (node != -1)
    {
        ans.push_back(node);
        node = parent[node];
    }

    reverse(ans.begin(), ans.end());

    for (auto item : ans)
        cout << item << " ";

    return 0;
}