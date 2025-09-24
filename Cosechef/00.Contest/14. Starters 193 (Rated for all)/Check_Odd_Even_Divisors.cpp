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
        ll a, b;
        cin >> a >> b;

        if (a >= 1)
        {
            if (b % a == 0)
                cout << "YES" << newline;
            else
                cout << "NO" << newline;
        }
        else
        {
            cout << "NO" << newline;
        }
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