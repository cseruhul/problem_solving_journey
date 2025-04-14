#include <bits/stdc++.h>
using namespace std;

#define ll long long int

vector<pair<ll, ll>> adj_list[100005];
ll weight[1000005];
ll parent[100005];

void dijkstra(ll src)
{
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, src});
    weight[src] = 0;

    while (!q.empty())
    {
        auto par = q.top();
        q.pop();

        ll par_node = par.second;
        ll par_weight = par.first;

        for (auto child : adj_list[par_node])
        {
            ll child_node = child.first;
            ll child_weight = child.second;

            if (weight[par_node] != LLONG_MAX && ((par_weight + child_weight) < weight[child_node]))
            {
                parent[child_node] = par_node;
                weight[child_node] = par_weight + child_weight;
                q.push({weight[child_node], child_node});
            }
        }
    }
}

int main()
{
    ll n, e;

    cin >> n >> e;

    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;

        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    for (ll i = 0; i <= n; i++)
    {
        weight[i] = LLONG_MAX;
        parent[i] = -1;
    }

    dijkstra(1);

    if (parent[n] == -1)
        cout << -1;
    else
    {
        ll node = n;

        vector<ll> ans;

        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }
        reverse(ans.begin(), ans.end());
        for (auto item : ans)
            cout << item << " ";
    }

    return 0;
}