// #define ll long long int

// vector<pair<ll, ll>> adj_list[100005];
// ll weight[1000005];
// ll parent[100005];

// void dijkstra(ll src)
// {
//     priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
//     q.push({0, src});
//     weight[src] = 0;

//     while (!q.empty())
//     {
//         auto par = q.top();
//         q.pop();

//         ll par_node = par.second;
//         ll par_weight = par.first;

//         for (auto child : adj_list[par_node])
//         {
//             ll child_node = child.first;
//             ll child_weight = child.second;

//             if (weight[par_node] != LLONG_MAX && (par_weight + child_weight) < weight[child_node])
//             {
//                 weight[child_node] = par_weight + child_weight;
//                 q.push({weight[child_node], child_node});
//             }
//         }
//     }
// }