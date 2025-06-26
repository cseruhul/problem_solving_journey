#include <bits/stdc++.h>
using namespace std;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n;
        cin >> n;
        vector<int> monster;

        for (int i = 0; i < n; i++)
        {
            int mons;
            cin >> mons;
            monster.push_back(mons);
        }

        if (n == 1)
        {
            cout << 1 << endl;
            return;
        }

        sort(monster.begin(), monster.end());

        int ans = 0;

        for (int i = 1; i < monster.size(); i += 2)
        {
            if ((monster[i] == monster[i - 1]) && (monster[i] == 1))
            {
                ans++;
            }
            else
            {
                ans += 2;
            }
        }

        // cout << ans << endl;

        if (n % 2)
            cout << (ans + 1) << endl;
        else
            cout << ans << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Ruhul_Amin ruhul;

    int q;
    cin >> q;
    while (q--)
    {
        ruhul.solve();
    }

    return 0;
}