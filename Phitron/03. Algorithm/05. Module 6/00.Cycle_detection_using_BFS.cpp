#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];

int parent[105];

bool flag;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << " ";
        for (auto child : adj_list[par])
        {
            if (visited[child] and parent[par] != par)
            {
                flag = true;
            }

            if (!visited[child])
            {
                q.push(child);
                visited[child] = true;
                parent[child] = par;
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

    flag = false;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
            bfs(i);
    }

    if (flag)
        cout << "Cycle ase";
    else
        cout << "Cycle Nai";

    // cout << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " er parent " << parent[i] << endl;
    // }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool visited[105];
int parent[105];

bool cycle;

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (!q.empty())
    {
        int parnt = q.front();
        q.pop();
        cout << "here" << endl;
        cout << parent << " ";

        for (auto child : adj_list[parnt])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = false;
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
    memset(parent, -1, sizeof(parent));

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(i);
        }
    }

    return 0;
}

*/