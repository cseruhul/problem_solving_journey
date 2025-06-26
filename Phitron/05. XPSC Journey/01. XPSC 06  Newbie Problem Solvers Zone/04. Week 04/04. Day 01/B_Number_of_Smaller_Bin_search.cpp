#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    int bin_search(vector<ll> &arr, int n, ll key)
    {
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (arr[mid] >= key)
                r = mid - 1;
            else
                l = mid + 1;
        }

        return l;
    }

    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n);
        vector<ll> b(m);
        vector<ll> ans(m);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < m; i++)
        {
            ans[i] = bin_search(a, n, b[i]);
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