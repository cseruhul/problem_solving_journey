#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m, sad;
    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        int a[n + 1];
        int b[m + 1];
        sad = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
        }

        for (int i = 1; i <= m; i++)
        {
            if (a[b[i]] == 0)
            {
                sad++;
            }
            else
            {
                a[b[i]]--;
            }
        }

        cout << sad << endl;
    }

    return 0;
}