#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define newline "\n"
const int MOD = 1e9 + 7;

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;

        pbds<ll> arr;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.insert(x);
        }

        for (int i = 0; i < m; i++)
        {
            ll x, ans;
            cin >> x;
            ans = arr.order_of_key(x + 1);
            cout << ans << " ";
        }
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}