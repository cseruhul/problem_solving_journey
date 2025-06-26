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
        int n, k;
        cin >> n >> k;

        int to_exchange = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % k != i % k)
                to_exchange++;
        }

        if (to_exchange == 0)
            cout << "0" << newline;
        else if (to_exchange == 2)
            cout << "1" << newline;
        else
            cout << "-1" << newline;
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