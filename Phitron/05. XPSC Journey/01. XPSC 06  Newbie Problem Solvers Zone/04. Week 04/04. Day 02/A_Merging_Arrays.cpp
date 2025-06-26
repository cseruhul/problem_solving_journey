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

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = 0;
        vector<ll> ans;

        while (l < n && r < m)
        {
            if (a[l] < b[r])
            {
                ans.push_back(a[l]);
                l++;
            }
            else
            {
                ans.push_back(b[r]);
                r++;
            }
        }

        if (l == n)
        {
            while (r < m)
            {
                ans.push_back(b[r]);
                r++;
            }
        }
        else
        {
            while (l < n)
            {
                ans.push_back(a[l]);
                l++;
            }
        }

        for (auto item : ans)
            cout << item << " ";
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