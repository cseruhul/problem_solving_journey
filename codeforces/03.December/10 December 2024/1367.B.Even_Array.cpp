#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, even = 0, odd = 0, count = 0;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if ((a[i] % 2 == 1) && (i % 2 == 0))
                even++;
            else if ((a[i] % 2 == 0) && (i % 2 == 1))
                odd++;
        }

        // cout << "EVEN " << even << " ODD " << odd << " = ";

        if (even != odd)
        {
            count = -1;
        }
        else
        {
            count = odd;
        }

        cout << count << endl;
    }

    return 0;
}