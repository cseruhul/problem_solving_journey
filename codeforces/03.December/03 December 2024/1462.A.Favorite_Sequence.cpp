#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i;
        cin >> n;
        int b[n], a[n];

        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int l = 0, r = n - 1;

        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i] = b[l];
                l++;
            }
            else
            {
                a[i] = b[r];
                r--;
            }
        }

        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}