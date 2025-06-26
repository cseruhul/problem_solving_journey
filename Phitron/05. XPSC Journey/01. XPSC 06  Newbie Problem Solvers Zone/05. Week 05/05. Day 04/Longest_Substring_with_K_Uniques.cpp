#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int k;
        string str;
        cin >> str >> k;
        int n = str.size();

        unordered_map<char, int> mp;
        int ans = -1;
        int l = 0, r = 0;

        while (r < n)
        {
            mp[str[r]]++;

            if (mp.size() == k)
            {
                ans = max(ans, r - l + 1);
            }
            else
            {

                while (mp.size() > k)
                {
                    mp[str[l]]--;

                    if (mp[str[l]] == 0)
                        mp.erase(str[l]);
                    l++;
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