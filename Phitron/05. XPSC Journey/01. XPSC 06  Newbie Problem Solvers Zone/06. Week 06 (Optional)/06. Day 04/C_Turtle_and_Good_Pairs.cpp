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
        map<char, int> mp;
        string str;
        cin >> str;

        for (int i = 0; i < n; i++)
        {
            mp[str[i]]++;
        }

        string ans;

        while (!mp.empty())
        {
            for (auto itr = mp.begin(); itr != mp.end();)
            {
                ans += itr->first;
                (itr->second)--;

                if (itr->second <= 0)
                {
                    itr = mp.erase(itr);
                }
                else
                {
                    itr++;
                }
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