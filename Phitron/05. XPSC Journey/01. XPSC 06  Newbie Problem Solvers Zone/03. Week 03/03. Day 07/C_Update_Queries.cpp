#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m;
        cin >> n >> m;
        string str;
        cin >> str;
        vector<int> index;
        map<int, int> mp;
        vector<pair<int, int>> vp;

        for (int i = 0; i < m; i++)
        {
            cin >> index[i];
            index[i]--;
            vp[i] = {mp[index[i]]++, index[i]};
        }
        string c;
        cin >> c;

        sort(c.begin(), c.end());
        sort(vp.begin(), vp.end());

        for (int i = m - 1; i >= 0; i--)
        {
            str[vp[i].second] = c[i];
        }

        cout << str << endl;
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