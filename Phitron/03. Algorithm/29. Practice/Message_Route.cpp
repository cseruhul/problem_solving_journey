#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool visited[100005];
int parent[100005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (auto child : adj_list[par])
        {
            if (!visited[child])
            {
                visited[child] = true;
                parent[child] = par;
                q.push(child);
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

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));

    bfs(1);

    if (visited[n])
    {
        int node = n;
        vector<int> ans;
        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }

        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}