#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        deque<ll> ans;

        int max_bits = __lg(n);

        for (int i = 0; i <= max_bits; i++)
        {
            if ((n >> i) & 1)
            {
                ll val = n - (1LL << i);
                if (val > 0)
                    ans.push_front(val);
            }
        }

        ans.push_back(n);
        cout << ans.size() << endl;
        for (auto item : ans)
            cout << item << " ";

        cout << endl;
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