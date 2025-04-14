#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool visited[1005];
vector<vector<int>> level;

void bfs()
{
    queue<int> q;
    q.push(0);
    visited[0] = true;
    level.push_back({0});

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
                    q.push(child);
                    visited[child] = true;
                    lvl.push_back(child);
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

    // for (int i = 0; i < n; i++)
    // {
    //     cout << i << " -> ";
    //     for (auto item : adj_list[i])
    //     {
    //         cout << item << " ";
    //     }
    //     cout << endl;
    // }

    bfs();
    // cout << endl;
    // for (int i = 0; i < level.size(); i++)
    // {
    //     cout << "level " << i << " -> ";
    //     for (auto item : level[i])
    //     {
    //         cout << item << " ";
    //     }
    //     cout << endl;
    // }

    int given_level;
    cin >> given_level;

    for (auto item : level[given_level])
    {
        cout << item << " ";
    }

    return 0;
}