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
        vector<ll> a(n);
        vector<ll> b(m);
        vector<ll> ans;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = 0, cnt = 0;

        while (r < m)
        {
            if (l < n && a[l] < b[r])
            {
                l++;
                cnt++;
            }
            else
            {
                ans.push_back(cnt);
                r++;
            }
        }

        for (auto item : ans)
            cout << item << " ";

        cout << endl;
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