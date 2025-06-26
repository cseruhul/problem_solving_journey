#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;
const int MX = 2e5 + 1;

vector<ll> arr(MX);

class Ruhul_Amin
{
public:
    ll sum_of_digits(ll x)
    {
        ll ans = 0;
        while (x)
        {
            ans += (x % 10);
            x = x / 10;
        }

        return ans;
    }
    Ruhul_Amin()
    {
        arr[0] = 0;
        for (ll i = 1; i < MX; i++)
        {
            arr[i] = arr[i - 1] + sum_of_digits(i);
        }
    }
    void solve()
    {
        ll n;
        cin >> n;
        cout << arr[n] << newline;
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