#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while (t--)
    {
        cin >> n;
        int i, result, max_quality = INT_MIN, a, b;

        for (i = 1; i <= n; i++)
        {
            cin >> a >> b;

            if (a <= 10)
            {
                if (max_quality <= b)
                {
                    // cout << "response " << i << ": " << a << " Words , quality " << b << endl;
                    max_quality = b;
                    result = i;
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}