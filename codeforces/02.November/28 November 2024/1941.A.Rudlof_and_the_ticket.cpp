#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, m, k, result = 0;

        cin >> n >> m >> k;
        int left[n], right[m];

        for (int i = 0; i < n; i++)
        {
            cin >> left[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> right[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((left[i] + right[j]) <= k)
                {
                    // cout << "(" << i + 1 << " " << j + 1 << ") ";
                    result++;
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}