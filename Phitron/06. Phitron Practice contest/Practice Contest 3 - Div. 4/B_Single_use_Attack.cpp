#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int h, x, y;
        cin >> h >> x >> y;

        int res1, res2;

        res1 = h / x + (h % x != 0);
        h = h - y;
        res2 = 1 + h / x + (h % x != 0);

        cout << min(res1, res2) << endl;
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