#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k, max_ele = INT_MIN, min_ele = INT_MAX;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> b(n);
        set<ll> st;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            max_ele = max(max_ele, a[i]);
            min_ele = min(min_ele, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (b[i] != -1)
            {
                st.insert(a[i] + b[i]);
            }
        }
        int st_size = st.size();

        if (st_size <= 1)
        {
            if (st_size == 1)
            {
                if (max_ele > *st.begin() || (*st.begin() - min_ele) > k)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
            else
            {
                ll i = 0;
                while (max_ele + i - min_ele <= k)
                {
                    i++;
                }
                cout << i << endl;
            }
        }
        else
        {
            cout << 0 << endl;
        }
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