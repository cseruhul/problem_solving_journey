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

        long long a[n];
        long long total_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        if (total_sum % n != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        long long target = total_sum / n;
        bool flag = true;

        long long prefix_sum = 0;
        for (int i = 0; i < n; ++i)
        {
            prefix_sum += a[i];
            if (prefix_sum < target * (i + 1))
            {
                flag = false;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;
}
