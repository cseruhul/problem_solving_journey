#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> a(n);
        vector<long long int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long int min_a = *min_element(a.begin(), a.end());
        long long int min_b = *min_element(b.begin(), b.end());

        long long int ans = 0;

        for (int i = 0; i < n; i++)
        {
            ans += max(a[i] - min_a, b[i] - min_b);
        }

        cout << ans << endl;
    }

    return 0;
}