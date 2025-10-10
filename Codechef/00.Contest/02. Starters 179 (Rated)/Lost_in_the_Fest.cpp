#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, bhumi, idx;
        cin >> n;
        vector<int> q(n);
        for (int i = 0; i < n; i++)
            cin >> q[i];

        bhumi = q[n - 1];

        for (int i = 0; i < n; i++)
        {
            if (q[i] >= bhumi)
            {
                idx = i + 1;
                break;
            }
        }

        cout << n - idx << endl;
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