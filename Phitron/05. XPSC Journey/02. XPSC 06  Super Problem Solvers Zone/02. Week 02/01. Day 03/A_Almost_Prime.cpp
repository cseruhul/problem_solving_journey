#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 3e3 + 7;
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
        vector<set<int>> arr(n + 1);
        int p = allprime.size();

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < p; j++)
            {
                if (i % allprime[j] == 0)
                {
                    arr[i].insert(allprime[j]);
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (arr[i].size() == 2)
                ans++;
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

    ruhul.solve();

    return 0;
}