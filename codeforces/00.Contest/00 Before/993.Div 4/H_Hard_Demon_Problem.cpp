#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int grid[n + 1][n + 1];

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> grid[i][j];
            }
        }

        while (q--)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;

            vector<int> a;

            for (int i = x1; i <= x2; i++)
            {
                for (int j = y1; j <= y2; j++)
                {
                    a.push_back(grid[i][j]);
                }
            }

            int sum = 0, i = 1;
            for (auto item : a)
            {
                sum += item * i;
                i++;
            }

            cout << sum << " ";
            a.clear();
        }
        cout << endl;
    }

    return 0;
}