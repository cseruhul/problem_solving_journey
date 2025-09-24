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

        set<int> marbel;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            marbel.insert(x);
        }

        if (marbel.size() >= m)
            cout << 0 << newline;
        else
            cout << (m - marbel.size()) << newline;
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