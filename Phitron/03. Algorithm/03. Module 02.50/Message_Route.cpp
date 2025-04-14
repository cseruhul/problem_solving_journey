#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100005];
bool visited[100005];
int level[100005];
int parent[100005];

void bfs_search(int src)
{
    queue<int> Queue;
    Queue.push(src);
    visited[src] = true;
    level[src] = 0;
    parent[src] = -1;

    while (!Queue.empty())
    {
        int parnt = Queue.front();
        Queue.pop();

        for (auto child : adj_list[parnt])
        {
            if (!visited[child])
            {
                Queue.push(child);
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

    memset(visited, false, sizeof(visited));
    memset(level, 0, sizeof(level));
    memset(parent, -1, sizeof(parent));

    bfs_search(1);
    vector<int> ans;

    if (visited[n])
    {
        cout << level[n] + 1 << endl;
        int node = n;

        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }

        reverse(ans.begin(), ans.end());
        for (auto item : ans)
            cout << item << " ";
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}