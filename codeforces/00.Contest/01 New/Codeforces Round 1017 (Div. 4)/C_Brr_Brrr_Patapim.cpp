#include <bits/stdc++.h>
using namespace std;
#define ll long long int

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, total_sum = 0, sum = 0;
        cin >> n;
        vector<vector<int>> g;
        vector<int> ans(n * 2);
        int m = n * 2;
        total_sum = m * (m + 1) / 2;

        for (int i = 0; i < n; i++)
        {
            vector<int> row;
            for (int j = 0; j < n; j++)
            {
                int num;
                cin >> num;
                row.push_back(num);
            }
            g.push_back(row);
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i + j] = g[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            sum += ans[i];
        }
        
        cout << total_sum - sum << " ";
        for (int i = 0; i < m - 1; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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