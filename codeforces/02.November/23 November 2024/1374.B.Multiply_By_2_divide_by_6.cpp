#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;

    cin >> t;

    while (t--)
    {
        long long count = 0;
        cin >> n;

        while (n != 1)
        {
            if ((n & (n - 1)) == 0)
            {
                count = -1;
                break;
            }
            else if ((n % 5 == 0) && ((n / 5) & ((n / 5) - 1) == 0))
            {
                count = -1;
                break;
            }
            else if (n % 6 == 0)
            {
                n = n / 6;
                count++;
            }
            else
            {
                n = n * 2;
                count++;
            }
            // cout << n << endl;
        }

        cout << count << endl;
    }
    return 0;
}