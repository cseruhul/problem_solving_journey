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
        vector<string> str;
        map<string, ll> mp;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            str.push_back(s);
        }

        for (int i = 0; i < n; i++)
        {
            string st = str[i];

            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != st[0])
                {
                    st[0] = ch;
                    ans += mp[st];
                }
            }

            st = str[i];
            for (char ch = 'a'; ch <= 'k'; ch++)
            {
                if (ch != st[1])
                {
                    st[1] = ch;
                    ans += mp[st];
                }
            }

            mp[str[i]]++;
            // for (auto item : mp)
            //     cout << item.first << " " << item.second << " ";
            // cout << endl;
            // cout << ans << endl;
        }
        cout << ans << endl;
        // cout << endl;
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