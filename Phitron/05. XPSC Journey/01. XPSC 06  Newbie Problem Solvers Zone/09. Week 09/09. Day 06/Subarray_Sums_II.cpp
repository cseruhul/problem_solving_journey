#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll ans = 0, sum = 0;
        int mask = __lg(1 << n);
        cout << "mask " << mask << endl;
        for (int i = 0; i < (1 << n); i++)
        {
            sum = 0;
            for (int k = mask; k >= 0; k--)
            {
                if ((i >> k) & 1)
                {
                    cout << 1 << " ";
                    sum += arr[k];
                }
                else
                {
                    cout << 0 << " ";
                }
            }
            cout << endl;
            if (sum == x)
            {
                cout << sum << endl;
                ans++;
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

    ruhul.solve();

    return 0;
}