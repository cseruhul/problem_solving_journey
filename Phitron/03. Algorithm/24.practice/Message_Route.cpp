#include <bits/stdc++.h>
using namespace std;

#define sz 100005

vector<int> adj_list[sz];
bool visited[sz];
int parent[sz];

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

    vector<int> ans;

    if (visited[n])
    {
        int node = n;
        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }

        reverse(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for (auto item : ans)
            cout << item << " ";
    }
    else
    {
        printf("IMPOSSIBLE");
    }

    return 0;
}