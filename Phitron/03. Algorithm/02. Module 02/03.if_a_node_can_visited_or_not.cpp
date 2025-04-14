#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[100];
bool visited[100];

bool is_visited_or_not(int source, int destinateion)
{
    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto child : adj_list[parent])
        {
            if (visited[child] == false)
            {
                q.push(child);
                visited[child] = true;
            }
        }
    }

    return visited[destinateion];
}

int main()
{
    int v, e, destination;
    cin >> v >> e >> destination;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    bool soln = is_visited_or_not(0, destination);

    if (soln)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}