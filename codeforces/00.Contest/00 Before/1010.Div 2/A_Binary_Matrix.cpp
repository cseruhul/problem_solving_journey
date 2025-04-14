#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> matrix(n, vector<char>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
        }
        int ans = 0;
        vector<int> rw(n);

        for (int i = 0; i < n; i++)
        {
            int cnt_1 = 0;
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == '1')
                {
                    cnt_1++;
                    if (cnt_1 % 2)
                    {
                        matrix[i][j] = '0';
                        cnt_1--;
                    }
                }
            }
            if (cnt_1 % 2)
                ans++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j];
            }
            cout << endl;
        }

        for (auto item : rw)
        {
            if (item % 2)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}