#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<ll> songs(n);

        for (int i = 0; i < n; i++)
        {
            cin >> songs[i];
        }

        int ans = 0;
        int l = 0, r = 0;
        map<ll, ll> mp;

        while (r < n)
        {
            if (mp.find(songs[r]) == mp.end())
            {
                mp[songs[r]] = r;
            }
            else
            {
                if (mp[songs[r]] >= l)
                    l = mp[songs[r]] + 1;
                mp[songs[r]] = r;
            }

            ans = max(ans, r - l + 1);
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