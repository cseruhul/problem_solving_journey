#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e7 + 7;
vector<bool> prime(MOD, true);
vector<int> allprime;

void sieve()
{
    for (int i = 2; i <= MOD; i++)
    {
        for (int j = i + i; j <= MOD; j += i)
        {
            prime[j] = false;
        }
    }

    for (int i = 2; i <= MOD; i++)
    {
        if (prime[i])
        {
            allprime.push_back(i);
        }
    }
}

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int a = i;
            auto it = upper_bound(allprime.begin(), allprime.end(), n / a);

            ans += (it - allprime.begin());
        }

        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    Ruhul_Amin ruhul;
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}