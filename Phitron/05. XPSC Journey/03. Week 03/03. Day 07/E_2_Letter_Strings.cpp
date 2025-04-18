#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        ll n, ans = 0;
        cin >> n;
        vector<string> str(n);
        unordered_map<string, ll> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }

        for (int i = 0; i < n; i++)
        {
            string temp = str[i];

            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != str[i][0])
                {
                    temp[0] = ch;
                    if (mp.find(temp) != mp.end())
                    {
                        ans += mp[temp];
                    }
                }
            }

            temp = str[i];
            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != str[i][1])
                {
                    temp[1] = ch;
                    if (mp.find(temp) != mp.end())
                    {
                        ans += mp[temp];
                    }
                }
            }

            mp[str[i]]++;
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