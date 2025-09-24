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
        int n, m;
        cin >> n >> m;

        if (n == 1 || m == 1)
            cout << "NO" << newline;
        else if (n == 2 && m == 2)
            cout << "NO" << newline;

        else
            cout << "YES" << newline;
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