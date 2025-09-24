#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e6 + 7;
vector<bool> prime(MOD, true);
vector<int> allprime;

class Ruhul_Amin
{
public:
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

    void solve()
    {
        int d;
        cin >> d;
        int n = allprime.size();

        int ans = 1, p, q;
        for (int i = 0; i <= n; i++)
        {
            if ((allprime[i] - 1) >= d)
            {
                p = allprime[i];
                break;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            if ((allprime[i] - p) >= d)
            {
                q = allprime[i];
                break;
            }
        }

        ans = p * q;

        cout << ans << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;
    ruhul.sieve();
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}