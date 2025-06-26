#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, c;
        cin >> n >> c;

        multiset<ll> arr;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            arr.insert(x + i + 1);
        }

        int cnt = 0, sum = 0;
        for (auto item : arr)
        {
            sum += item;
            cnt++;
            if (sum > c)
            {
                cout << cnt - 1 << endl;
                return;
            }
        }

        cout << n << endl;
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