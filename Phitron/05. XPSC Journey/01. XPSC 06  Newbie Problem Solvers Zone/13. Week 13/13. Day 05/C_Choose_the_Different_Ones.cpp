#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, m, k;
        cin >> n >> m >> k;
        set<ll> a;
        set<ll> b;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.insert(x);
        }

        for (int i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            b.insert(x);
        }

        set<ll> ans;

        auto ptr = a.begin();
        for (int i = 0; i < k / 2; i++)
        {
            if (*ptr <= k && ans.find(*ptr) == ans.end())
                ans.insert(*ptr);
            ptr++;
        }
         
        ptr = b.begin();
        for (int i = 0; i < k / 2; i++)
        {
            if (*ptr <= k && ans.find(*ptr) == ans.end())
                ans.insert(*ptr);
            ptr++;
        }
        for (auto item : ans)
            cout << item << " ";
        cout << newline;

        if (ans.size() == k)
            cout << "YES" << newline;
        else
            cout << "NO" << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}