#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, k;
        cin >> n, k;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        unordered_map<ll, ll> mp;
        int l = 0, r = 0, ans = 0;

        while (r < n)
        {
            mp[arr[r]]++;
            if (mp.size() <= 3)
            {
                ans += mp.size();
            }
            else
            {
                while (mp.size() > 3)
                {
                    mp[arr[l]]--;
                    if (mp[arr[l]] == 0)
                        mp.erase(arr[l]);
                    l++;
                }

                if (mp.size() <= 3)
                {
                    ans += mp.size();
                }
            }
            r++;
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