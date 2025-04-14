#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            int diff = a[i] - b[i + 1];
            if (diff > 0)
                ans += diff;
        }
        cout << ans << endl;
    }

    return 0;
}