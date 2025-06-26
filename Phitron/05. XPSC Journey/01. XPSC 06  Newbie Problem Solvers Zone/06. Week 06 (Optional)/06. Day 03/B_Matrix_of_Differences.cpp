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
        vector<vector<int>> ans(n + 1, vector<int>(n + 1));
        int mn = 1, mx = n * n, cnt = 1;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (cnt % 2 == 1)
                    {
                        ans[i][j] = mn;
                        mn++;
                    }
                    else
                    {
                        ans[i][j] = mx;
                        mx--;
                    }
                    cnt++;
                }
            }
            else
            {
                for (int j = n; j > 0; j--)
                {
                    if (cnt % 2 == 1)
                    {
                        ans[i][j] = mn;
                        mn++;
                    }
                    else
                    {
                        ans[i][j] = mx;
                        mx--;
                    }
                    cnt++;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
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