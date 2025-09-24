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
        ll n;
        cin >> n;

        vector<ll> prefix_gcd(n);
        vector<ll> suffix_gcd(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> prefix_gcd[i];
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> suffix_gcd[i];
        }

        bool flag = true;

        for (ll i = 1; i < n; i++)
        {
            if (prefix_gcd[i - 1] % prefix_gcd[i] != 0)
            {
                flag = false;
                break;
            }
        }

        for (ll i = 1; i < n; i++)
        {
            if (suffix_gcd[i] % suffix_gcd[i - 1] != 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
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