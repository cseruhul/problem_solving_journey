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
        priority_queue<ll, vector<ll>, greater<ll>> even;
        priority_queue<ll> odd;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2)
                odd.push(x);
            else
                even.push(x);
        }

        ll ans = 0;
        while (!odd.empty() && !even.empty())
        {
            ll odd_num = odd.top(), even_num = even.top();
            if (even_num < odd_num)
            {
                even.pop();
                odd.push(odd_num + even_num);
                ans++;
            }
            else if (even_num > odd_num)
            {
                ans += even.size() + 1;
                break;
            }
            
        }

        cout << ans << endl; 
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