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
        ll ans = 0, sum = 0, l = 0, r = 0;
        bool neg_cnt = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
        }

        for (auto item : arr)
        {
            if (item < 0)
            {
                if (neg_cnt == 0)
                {
                    neg_cnt = true;
                    ans++;
                }
            }
            else if (item > 0)
            {
                neg_cnt = false;
            }
        }

        cout << sum << " " << ans << endl;
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