#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        ll ans = 0;
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = 0, cnt1 = 0, cnt2 = 0;

        while (l < n && r < m)
        {
            int current = a[l];
            cnt1 = 0, cnt2 = 0;

            while (l < n && current == a[l])
            {
                cnt1++;
                l++;
            }

            while (r < m && current > b[r])
                r++;

            while (r < m && current == b[r])
            {
                cnt2++;
                r++;
            }

            ans += (1LL * cnt1 * cnt2);
        }

        cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    ruhul.solve();

    return 0;
}