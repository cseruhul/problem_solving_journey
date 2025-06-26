#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int t;
        cin >> t;

        while (t--)
        {
            vector<string> person[4];
            vector<int> ans(4, 0);
            map<string, int> mp;

            int n;
            cin >> n;

            for (int i = 1; i <= 3; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    string s;
                    cin >> s;

                    person[i].push_back(s);
                    mp[s]++;
                }
            }

            for (int i = 1; i <= 3; i++)
            {
                for (auto word : person[i])
                {
                    if (mp[word] == 1)
                    {
                        ans[i] += 3;
                    }
                    else if (mp[word] == 2)
                    {
                        ans[i] += 1;
                    }
                }
            }

            for (int i = 1; i <= 3; i++)
            {
                cout << ans[i] << " ";
            }

            cout << "\n";
        }
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