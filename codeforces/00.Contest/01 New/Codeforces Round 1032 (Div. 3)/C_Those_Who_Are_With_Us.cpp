#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define newline "\n"

const int MOD = 1e9 + 7;

class Ruhul_Amin
{
public:
    void solve()
    {
        int n, m, mx_element = INT_MIN;
        cin >> n >> m;

        int arr[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                mx_element = max(mx_element, arr[i][j]);
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << newline;
        // }

        for (int rr = 0; rr < 2; rr++)
        {
            vector<int> row(105, 0);
            vector<int> col(105, 0);

            // cout << "---------\n";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (arr[i][j] == mx_element)
                    {
                        row[i]++;
                        col[j]++;
                    }
                }
            }

            auto max_row = max_element(row.begin(), row.end());
            auto max_col = max_element(col.begin(), col.end());

            int r = max_row - row.begin();
            int c = max_col - col.begin();

            if (r > c)
            {
                for (int i = 0; i < m; i++)
                {
                    arr[r][i]--;
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    if (i != r)
                        arr[i][c]--;
                }
            }
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, arr[i][j]);
                // cout << arr[i][j] << " ";
            }
            // cout << newline;
        }
        // cout << "---------\n";

        cout << "ans " << ans << newline;
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