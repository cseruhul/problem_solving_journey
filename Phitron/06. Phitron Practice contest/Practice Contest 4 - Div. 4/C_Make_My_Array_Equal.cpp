#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        
        
        if (st.size() <= 2)
        {
            if (*st.begin() == 0 || st.size() == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
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