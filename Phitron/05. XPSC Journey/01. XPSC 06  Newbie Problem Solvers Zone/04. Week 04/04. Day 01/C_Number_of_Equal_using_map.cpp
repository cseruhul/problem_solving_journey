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
        unordered_map<int, int> freq_map;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq_map[a[i]]++;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            ans += (1LL * freq_map[b[i]]);
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