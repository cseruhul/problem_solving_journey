#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        for (int i = 0; i < k; i++)
        {
            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}