#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e5 + 7;
vector<bool> prime(MOD, true);

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
    }

    void solve()
    {
        int n;
        cin >> n;

        if (n < 3)
            cout << 1 << newline;
        else
            cout << 2 << newline;
        for (int i = 1; i <= n; i++)
        {
            if (prime[i + 1])
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 2 << " ";
            }
        }

        cout << newline;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.sieve();
    ruhul.solve();

    return 0;
}