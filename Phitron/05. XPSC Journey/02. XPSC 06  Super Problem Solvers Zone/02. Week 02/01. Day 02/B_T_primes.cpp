#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const ll MOD = 1e12 + 7;

bool is_prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (auto N : arr)
        {
            ll sq = sqrt(N);

            if (N < 2)
            {
                cout << "NO" << newline;
            }
            else
            {
                if (sq * sq == N && is_prime(sq))
                {
                    cout << "YES" << newline;
                }
                else
                {
                    cout << "NO" << newline;
                }
            }
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