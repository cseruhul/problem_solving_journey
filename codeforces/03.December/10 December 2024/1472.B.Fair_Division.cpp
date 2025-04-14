#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, total = 0, one = 0, two = 0;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            total += a[i];
            if (a[i] == 1)
                one++;
            else
                two++;
        }

        if (total % 2 == 0)
        {
            total = total / 2;
            if ((total % 2 == 0) || (total % 2 == 1 && one != 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}