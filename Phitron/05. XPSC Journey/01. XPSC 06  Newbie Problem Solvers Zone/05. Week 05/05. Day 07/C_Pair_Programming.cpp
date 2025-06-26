#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int ai = 0, bi = 0;
        vector<int> ans;

        while (ai < n && bi < m)
        {
            if (a[ai] <= k)
            {
                if (a[ai] == 0)
                {
                    k++;
                }
                ans.push_back(a[ai]);
                ai++;
            }
            else if (b[bi] <= k)
            {
                if (b[bi] == 0)
                {
                    k++;
                }
                ans.push_back(b[bi]);
                bi++;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }

        if (ai == n)
        {
            while (bi < m)
            {
                if (b[bi] <= k)
                {
                    if (b[bi] == 0)
                    {
                        k++;
                    }
                    ans.push_back(b[bi]);
                    bi++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        else if (bi == m)
        {
            while (ai < n)
            {
                if (a[ai] <= k)
                {
                    if (a[ai] == 0)
                    {
                        k++;
                    }
                    ans.push_back(a[ai]);
                    ai++;
                }
                else
                {
                    cout << -1 << endl;
                    return;
                }
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
    int t;
    cin >> t;

    while (t--)
        ruhul.solve();

    return 0;
}